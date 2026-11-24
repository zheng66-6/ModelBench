function tc = clang_tc()
% LLVM/Clang toolchain for the HDRT xert target.
%
% Notes:
%   - "-march=cascadelake" targets the Intel Xeon Gold 6256 benchmark host.
%   - "GCCBased" is kept so Simulink emits the GNU-style makefile syntax that
%     clang also understands.
%   - "-lcrypto" is kept for compatibility; the HDRT runtime does not need it.
%   - Linker adds -L/usr/local/lib so libhdtmp.a is found after "make install".

tc = coder.make.ToolchainInfo('BuildArtifact', 'gmake makefile');
tc.Name             = 'HDRT Linux Target (64-bit | make | clang/clang++)';
tc.Platform         = 'glnxa64';

% Keep GCCBased attribute as Simulink uses it to format Makefile syntax correctly for Clang as well
tc.addAttribute('GCCBased');
tc.addAttribute('SupportsSpacesInPaths', 'false');
tc.addAttribute('TransformPathsWithSpaces');

% ------------------------------
% Macros
% ------------------------------
tc.addMacro('WARN_FLAGS',           '-Wall -W -Wwrite-strings -Winline -Wstrict-prototypes -Wnested-externs -Wpointer-arith -Wcast-align');
tc.addMacro('WARN_FLAGS_MAX',       '$(WARN_FLAGS) -Wcast-qual -Wshadow');
tc.addMacro('CPP_WARN_FLAGS',       '-Wall -W -Wwrite-strings -Winline -Wpointer-arith -Wcast-align');
tc.addMacro('CPP_WARN_FLAGS_MAX',   '$(CPP_WARN_FLAGS) -Wcast-qual -Wshadow');

tc.addIntrinsicMacros({'ldebug', 'conflags', 'cflags'});

% ------------------------------
% C Compiler
% ------------------------------
tool = tc.getBuildTool('C Compiler');
tool.setName(           'Clang C Compiler');
tool.setCommand(        'clang');
tool.setPath(           '');

tool.setDirective(      'CompileFlag',          '-c -march=cascadelake');
tool.setDirective(      'Debug',                '-g');
tool.setDirective(      'FileSeparator',        '/');
tool.setDirective(      'IncludeSearchPath',    '-I');
tool.setDirective(      'PreprocessorDefine',   '-D');
tool.setDirective(      'OutputFlag',           '-o');
tool.setDirective(      'PreprocessFile',       '-E');

tool.setFileExtension(  'Source',               '.c');
tool.setFileExtension(  'Header',               '.h');
tool.setFileExtension(  'Object',               '.o');

tool.Libraries = {' -lhdtmp -lcrypto -lrt -lpthread -lm -Wl,--no-as-needed -ldl '};
tool.setCommandPattern('|>TOOL<| |>TOOL_OPTIONS<| |>OUTPUT_FLAG<||>OUTPUT<|');

% ------------------------------
% C Linker
% ------------------------------
tool = tc.getBuildTool('C Linker');
tool.setName(           'Clang C Linker');
tool.setCommand(        'clang');
tool.setPath(           '');

tool.setDirective(      'Debug',                '-g');
tool.setDirective(      'FileSeparator',        '/');
tool.setDirective(      'Library',              '-l');
tool.setDirective(      'LibrarySearchPath',    '-L');
tool.setDirective(      'OutputFlag',           '-o');

tool.setFileExtension(  'Executable',           '');
tool.setFileExtension(  'Shared Library',       '.so');
tool.setCommandPattern('|>TOOL<| |>TOOL_OPTIONS<| |>OUTPUT_FLAG<| |>OUTPUT<|');

% ------------------------------
% C++ Compiler
% ------------------------------
tool = tc.getBuildTool('C++ Compiler');
tool.setName(           'Clang C++ Compiler');
tool.setCommand(        'clang++');
tool.setPath(           '');

tool.setDirective(      'CompileFlag',          '-c');
tool.setDirective(      'Debug',                '-g');
tool.setDirective(      'FileSeparator',        '/');
tool.setDirective(      'IncludeSearchPath',    '-I');
tool.setDirective(      'PreprocessorDefine',   '-D');
tool.setDirective(      'OutputFlag',           '-o');
tool.setDirective(      'PreprocessFile',       '-E');

tool.setFileExtension(  'Source',               '.cpp');
tool.setFileExtension(  'Header',               '.hpp');
tool.setFileExtension(  'Object',               '.o');
tool.setCommandPattern('|>TOOL<| |>TOOL_OPTIONS<| |>OUTPUT_FLAG<| |>OUTPUT<|');

% ------------------------------
% C++ Linker
% ------------------------------
tool = tc.getBuildTool('C++ Linker');
tool.setName(           'Clang C++ Linker');
tool.setCommand(        'clang++');
tool.setPath(           '');

tool.setDirective(      'Debug',                '-g');
tool.setDirective(      'FileSeparator',        '/');
tool.setDirective(      'Library',              '-l');
tool.setDirective(      'LibrarySearchPath',    '-L');
tool.setDirective(      'OutputFlag',           '-o');

tool.setFileExtension(  'Executable',           '');
tool.setFileExtension(  'Shared Library',       '.so');
tool.setCommandPattern('|>TOOL<| |>TOOL_OPTIONS<| |>OUTPUT_FLAG<||>OUTPUT<|');

% ------------------------------
% Archiver
% ------------------------------
tool = tc.getBuildTool('Archiver');
tool.setName(           'LLVM Archiver');
tool.setCommand(        'llvm-ar'); % Recommended for LLVM toolchains
tool.setPath(           '');

tool.setDirective(      'FileSeparator',        '/');
tool.setFileExtension(  'Static Library',       '.a');
tool.setCommandPattern('|>TOOL<| |>TOOL_OPTIONS<| |>OUTPUT_FLAG<||>OUTPUT<|');

% ------------------------------
% MEX Tool
% ------------------------------
tool = tc.getBuildTool('MEX Tool');
tool.setName(           'MEX Tool');
tool.setCommand(        'mex');
tool.setPath(           '$(MATLAB_ARCH_BIN)');
tool.setDirective(      'Debug',                '-g');
tool.setDirective(      'FileSeparator',        '/');
tool.setDirective(      'OutputFlag',           '-outdir');
tool.setFileExtension(  'MEX',                  '.mexa64');

% ------------------------------
% Download / Execute / GMAKE Utility
% ------------------------------
tool = tc.getPostbuildTool('Download');
tool.setName('Download'); tool.setCommand(''); tool.setPath('');

tool = tc.getPostbuildTool('Execute');
tool.setName('Execute'); tool.setCommand('$(PRODUCT)'); tool.setPath('');

tool = tc.BuilderApplication;
tool.setName(           'GMAKE Utility');
tool.setCommand(        'gmake');
tool.setPath(           '%MATLAB%/bin/glnxa64');

tool.setDirective(      'Comment',                  '#');
tool.setDirective(      'DeleteCommand',            '@rm -f');
tool.setDirective(      'DisplayCommand',           '@echo');
tool.setDirective(      'FileSeparator',            '/');
tool.setDirective(      'ImpliedFirstDependency',   '$<');
tool.setDirective(      'ImpliedTarget',            '$@');
tool.setDirective(      'IncludeFile',              '-include');
tool.setDirective(      'LineContinuation',         '\');
tool.setDirective(      'MoveCommand',              '@mv');
tool.setDirective(      'ReferencePattern',         '\$\($1\)');
tool.setDirective(      'RunScriptCommand',         '');
tool.setFileExtension(  'Makefile',             '.mk');

% ------------------------------
% Builder
% ------------------------------
tc.setBuilderApplication(tc.Platform);

% --------------------------------------------
% BUILD CONFIGURATIONS
% --------------------------------------------
optimsOffOpts    = {'-O0'};
% Note: Removed -fno-loop-optimize as Clang might emit a warning for this legacy GCC flag
optimsOnOpts     = {'-O2 -march=cascadelake -DPMU_MONITOR -D__arch_x86__=1 -DTASK_ISOLATION'}; 
cCompilerOpts    = '-c $(C_STANDARD_OPTS) -fno-pie -fno-fast-math -ffp-contract=fast -fno-stack-protector -fcf-protection=none';
cppCompilerOpts  = '-c $(CPP_STANDARD_OPTS) -fno-pie -fno-fast-math -ffp-contract=fast -fno-stack-protector -fcf-protection=none';
linkerOpts       = {'-Wl,-rpath,"$(MATLAB_ARCH_BIN)" -L"$(MATLAB_ARCH_BIN)" -L"/usr/local/lib" -no-pie'};
sharedLinkerOpts = horzcat(linkerOpts, '-Wl,--no-undefined $(LDDEBUG)');
archiverOpts     = {'ruvs'};

debugFlag.CCompiler   = '$(CDEBUG)';   
debugFlag.CppCompiler = '$(CPPDEBUG)';
debugFlag.Linker      = '$(LDDEBUG)';  
debugFlag.CppLinker   = '$(CPPLDDEBUG)';  
debugFlag.Archiver    = '$(ARDEBUG)';  

% Faster Builds
cfg = tc.getBuildConfiguration('Faster Builds');
cfg.setOption( 'C Compiler',                horzcat(cCompilerOpts,   optimsOffOpts));
cfg.setOption( 'C++ Compiler',              horzcat(cppCompilerOpts, optimsOffOpts));
cfg.setOption( 'Linker',                    linkerOpts);
cfg.setOption( 'C++ Linker',                linkerOpts);
cfg.setOption( 'Shared Library Linker',     sharedLinkerOpts);
cfg.setOption( 'Archiver',                  archiverOpts);

% Faster Runs
cfg = tc.getBuildConfiguration('Faster Runs');
cfg.setOption( 'C Compiler',                horzcat(cCompilerOpts,   optimsOnOpts));
cfg.setOption( 'C++ Compiler',              horzcat(cppCompilerOpts, optimsOnOpts));
cfg.setOption( 'Linker',                    linkerOpts);
cfg.setOption( 'C++ Linker',                linkerOpts);
cfg.setOption( 'Shared Library Linker',     sharedLinkerOpts);
cfg.setOption( 'Archiver',                  archiverOpts);

% Debug
cfg = tc.getBuildConfiguration('Debug');
cfg.setOption( 'C Compiler',              	horzcat(cCompilerOpts,   optimsOffOpts, debugFlag.CCompiler));
cfg.setOption( 'C++ Compiler',          	horzcat(cppCompilerOpts, optimsOffOpts, debugFlag.CppCompiler));
cfg.setOption( 'Linker',                	horzcat(linkerOpts,       debugFlag.Linker));
cfg.setOption( 'C++ Linker',               	horzcat(linkerOpts,       debugFlag.CppLinker));
cfg.setOption( 'C++ Shared Library Linker',  	horzcat(sharedLinkerOpts, debugFlag.Linker));
cfg.setOption( 'Shared Library Linker',  	horzcat(sharedLinkerOpts, debugFlag.Linker));
cfg.setOption( 'Archiver',              	horzcat(archiverOpts,     debugFlag.Archiver));
