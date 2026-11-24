%% Build and register the Intel icx/icpx toolchain.
%% Saves intel_icx_tc.mat next to this file; rtwTargetInfo.m picks it up.
intel_icx_tc = icx_tc;
save intel_icx_tc intel_icx_tc
RTW.TargetRegistry.getInstance('reset');
savepath()