%% MATLAB path configuration script
% Resolve folders relative to this script (not the current working
% directory) so xert/, scripts/ and toolchain/ are found no matter where
% MATLAB was started.
baseDir = fileparts(mfilename('fullpath'));
if isempty(baseDir)
    baseDir = pwd;
end
% Support both layouts:
%   <root>/{xert,scripts,toolchain}              (model_stf staging)
%   <root>/model_config/{xert,scripts,toolchain} (open_source tree)
if ~exist(fullfile(baseDir, 'xert'), 'dir') && ...
        exist(fullfile(baseDir, 'model_config', 'xert'), 'dir')
    baseDir = fullfile(baseDir, 'model_config');
end

% Relative folders that must be added to the MATLAB path.
folders = { ...
    'xert', ...
    'scripts', ...
    fullfile('toolchain', 'gnu_gcc'), ...
    fullfile('toolchain', 'llvm_clang'), ...
    fullfile('toolchain', 'intel_icx') ...
};

fprintf('Configuring MATLAB path...\n');

for i = 1:length(folders)
    fullPath = fullfile(baseDir, folders{i});
    
    if exist(fullPath, 'dir')
        addpath(fullPath);
        fprintf('Added: %s\n', fullPath);
    else
        warning('Directory does not exist, skipping: %s', fullPath);
    end
end

% Persist the current path into pathdef.m.
status = savepath;

if status == 0
    fprintf('\nPath saved successfully. It will persist across MATLAB restarts.\n');
else
    fprintf('\n[ERROR] Could not save the path. Check write permission for pathdef.m,\n');
    fprintf('or use a startup.m based setup instead.\n');
end


% Reset the target registry so the new toolchains are re-discovered.
RTW.TargetRegistry.getInstance('reset');
