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
  % Name is the entry shown in the Simulink "Toolchain" drop-down list.
  config(end).Name      = 'HDRT Linux Intel/ICX | icx/icpx'; 
  config(end).FileName  = fullfile(fileparts(mfilename('fullpath')),'intel_icx_tc.mat');
  % config(end).TargetHWDeviceType		 =  {'<devicetype>'};
  % config(1).Platform  = {'<win64>'};

end


