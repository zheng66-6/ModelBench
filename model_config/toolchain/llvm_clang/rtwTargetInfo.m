function rtwTargetInfo(tr)
% RTWTARGETINFO Target info callback
% refer to : https://www.mathworks.com/help/coder/ug/register-the-custom-toolchain.html

tr.registerTargetInfo(@loc_createToolchain);

end

% -------------------------------------------------------------------------
% Create the ToolchainInfoRegistry entries
% -------------------------------------------------------------------------
function config = loc_createToolchain
  
  config = coder.make.ToolchainInfoRegistry;

  config(end)           = coder.make.ToolchainInfoRegistry;
  config(end).Name      = 'HDRT Linux LLVM/Clang | clang/clang++';
  config(end).FileName  = fullfile(fileparts(mfilename('fullpath')),'llvm_clang_tc.mat');

end
