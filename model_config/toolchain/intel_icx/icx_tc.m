function tc = icx_tc()
% Intel icx/icpx toolchain for the HDRT xert target.
%
% Reference:
% https://www.mathworks.com/matlabcentral/mlc-downloads/downloads/submissions/54172/versions/2/previews/SimulinkDevEnv/raspberryPi_tc_setup/raspberryPiw64_tc.m/index.html
%
% Notes:
%   - "-march=cascadelake" targets the Intel Xeon Gold 6256 benchmark host.
%   - "-lcrypto" is kept for compatibility; the HDRT runtime does not need it.
%   - Linker adds -L/usr/local/lib so libhdtmp.a is found after "make install".
%
useRmInsteadOfDel = true;

tc = coder.make.ToolchainInfo('BuildArtifact', 'gmake makefile');
tc.Name             = 'HDRT Intel Linux Target (64-bit | make | icx/icpx)';
tc.Platform         = 'glnxa64';

tc.addAttribute('GCCBased');
tc.addAttribute('SupportsSpacesInPaths', 'false');
tc.addAttribute('TransformPathsWithSpaces');

% ------------------------------
% Setup
% ------------------------------
% tc.ShellSetup{1} = '(none)';


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

tool.setName(           'Intel C Compiler');
tool.setCommand(        'icx');
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

% --- add --no-as-needed -ldl for udp send&receive ---
tool.Libraries = {'-lhdtmp -lcrypto -lrt -lpthread -lm -Wl,--no-as-needed -ldl '};

tool.setCommandPattern('|>TOOL<| |>TOOL_OPTIONS<| |>OUTPUT_FLAG<||>OUTPUT<|');

% ------------------------------
% C Linker
% ------------------------------

tool = tc.getBuildTool('C Linker');

tool.setName(           'Intel C Linker');
tool.setCommand(        'icx');
tool.setPath(           '');

tool.setDirective(      'Debug',                '-g');
%tool.setDirective(      'EndLibraryGroup',      '-Wl,--end-group');
tool.setDirective(      'FileSeparator',        '/');
tool.setDirective(      'Library',              '-l');
tool.setDirective(      'LibrarySearchPath',    '-L');
tool.setDirective(      'OutputFlag',           '-o');
%tool.setDirective(      'StartLibraryGroup',    '-Wl,--start-group');

tool.setFileExtension(  'Executable',           '');
tool.setFileExtension(  'Shared Library',       '.so');

tool.setCommandPattern('|>TOOL<| |>TOOL_OPTIONS<| |>OUTPUT_FLAG<| |>OUTPUT<|');

% ------------------------------
% C++ Compiler
% ------------------------------

tool = tc.getBuildTool('C++ Compiler');

tool.setName(           'Intel C++ Compiler');
tool.setCommand(        'icpx');
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

tool.setName(           'Intel C++ Linker');
tool.setCommand(        'icpx');
tool.setPath(           '');

tool.setDirective(      'Debug',                '-g');
%tool.setDirective(      'EndLibraryGroup',      '-Wl,--end-group');
tool.setDirective(      'FileSeparator',        '/');
tool.setDirective(      'Library',              '-l');
tool.setDirective(      'LibrarySearchPath',    '-L');
tool.setDirective(      'OutputFlag',           '-o');
%tool.setDirective(      'StartLibraryGroup',    '-Wl,--start-group');

tool.setFileExtension(  'Executable',           '');
tool.setFileExtension(  'Shared Library',       '.so');

tool.setCommandPattern('|>TOOL<| |>TOOL_OPTIONS<| |>OUTPUT_FLAG<||>OUTPUT<|');

% ------------------------------
% Archiver
% ------------------------------

tool = tc.getBuildTool('Archiver');

tool.setName(           'GNU Archiver');
tool.setCommand(        'ar');
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
% Download  
% ------------------------------
tool = tc.getPostbuildTool('Download');

tool.setName(           'Download');
tool.setCommand(        '');
tool.setPath(           '');

% ------------------------------
% Execute
% ------------------------------
tool = tc.getPostbuildTool('Execute');

tool.setName(           'Execute');
tool.setCommand(        '$(PRODUCT)');
tool.setPath(           '');

% ------------------------------
% GMAKE Utility
% ------------------------------
% the following example is from 
% https://www.mathworks.com/matlabcentral/mlc-downloads/downloads/2cd85d34-c9d7-49ee-8305-66eaca2832ce/9abfb20e-8b0e-4a46-8686-8c22d3c8d6f9/previews/AC6Toolchain/AC6toolchain_generate.m/index.html
% tc.setBuildConfigurationOption('all', 'Make Tool', '-f $(MAKEFILE)');
% makeTool = tc.BuilderApplication;
% if isequal(platform, 'win64')
% makeTool.setDirective('DeleteCommand', '@del /f/q');
% else
% makeTool.setDirective('DeleteCommand', '@rm -rf');
% end

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
optimsOnOpts     = {'-O2 -march=cascadelake -DPMU_MONITOR -D__arch_x86__=1 -DTASK_ISOLATION'};
cCompilerOpts    = '-c $(C_STANDARD_OPTS) -fno-pie -fno-fast-math -ffp-contract=fast -fno-stack-protector -fcf-protection=none';
cppCompilerOpts  = '-c $(CPP_STANDARD_OPTS) -fno-pie -fno-fast-math -ffp-contract=fast -fno-stack-protector -fcf-protection=none';
linkerOpts       = {'-Wl,-rpath,"$(MATLAB_ARCH_BIN)" -L"$(MATLAB_ARCH_BIN)" -L"/usr/local/lib" -no-pie'};
%sharedLinkerOpts = horzcat(linkerOpts, '-Wl,--no-undefined $(LDDEBUG) $(LIBS_HDRTDIR)');
sharedLinkerOpts = horzcat(linkerOpts, '-Wl,--no-undefined $(LDDEBUG)');
archiverOpts     = {'ruvs'};

% Get the debug flag per build tool
debugFlag.CCompiler   = '$(CDEBUG)';   
debugFlag.CppCompiler = '$(CPPDEBUG)';
debugFlag.Linker      = '$(LDDEBUG)';  
debugFlag.CppLinker   = '$(CPPLDDEBUG)';  
debugFlag.Archiver    = '$(ARDEBUG)';  

% Set the toolchain flags for 'Faster Builds' build configuration

cfg = tc.getBuildConfiguration('Faster Builds');
cfg.setOption( 'C Compiler',                horzcat(cCompilerOpts,   optimsOffOpts));
cfg.setOption( 'C++ Compiler',              horzcat(cppCompilerOpts, optimsOffOpts));
cfg.setOption( 'Linker',                    linkerOpts);
cfg.setOption( 'C++ Linker',                linkerOpts);
cfg.setOption( 'Shared Library Linker',     sharedLinkerOpts);
cfg.setOption( 'Archiver',                  archiverOpts);

% Set the toolchain flags for 'Faster Runs' build configuration

cfg = tc.getBuildConfiguration('Faster Runs');
cfg.setOption( 'C Compiler',                horzcat(cCompilerOpts,   optimsOnOpts));
cfg.setOption( 'C++ Compiler',              horzcat(cppCompilerOpts, optimsOnOpts));
cfg.setOption( 'Linker',                    linkerOpts);
cfg.setOption( 'C++ Linker',                linkerOpts);
cfg.setOption( 'Shared Library Linker',     sharedLinkerOpts);
cfg.setOption( 'Archiver',                  archiverOpts);

% Set the toolchain flags for 'Debug' build configuration

cfg = tc.getBuildConfiguration('Debug');
cfg.setOption( 'C Compiler',                horzcat(cCompilerOpts,   optimsOffOpts, debugFlag.CCompiler));
cfg.setOption( 'C++ Compiler',              horzcat(cppCompilerOpts, optimsOffOpts, debugFlag.CppCompiler));
cfg.setOption( 'Linker',                    horzcat(linkerOpts,       debugFlag.Linker));
cfg.setOption( 'C++ Linker',                horzcat(linkerOpts,       debugFlag.CppLinker));
cfg.setOption( 'C++ Shared Library Linker',  horzcat(sharedLinkerOpts, debugFlag.Linker));
cfg.setOption( 'Shared Library Linker',      horzcat(sharedLinkerOpts, debugFlag.Linker));
cfg.setOption( 'Archiver',                  horzcat(archiverOpts,     debugFlag.Archiver));

%tc.setBuildConfigurationOption('all', 'Download',      '');
%tc.setBuildConfigurationOption('all', 'Execute',       '');
%tc.setBuildConfigurationOption('all', 'Make Tool',     '-f $(MAKEFILE)');
