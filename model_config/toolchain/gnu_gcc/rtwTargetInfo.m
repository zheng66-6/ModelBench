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
  config(end).Name      = 'HDRT Linux GNU/gcc | gcc/g++';
  config(end).FileName  = fullfile(fileparts(mfilename('fullpath')),'gnu_gcc_tc.mat');
  % config(1).TargetHWDeviceType		 =  {'<devicetype>'};
  % config(1).Platform  = {'<win64>'};

% To register more custom toolchains:
% 1) Copy and paste the five preceding 'config' lines.
% 2) Increment the index of config().
% 3) Replace the values between angle brackets.
% 4) Remove the angle brackets.

end