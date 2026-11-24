%% Build and register the GNU gcc/g++ toolchain.
%% Saves gnu_gcc_tc.mat next to this file; rtwTargetInfo.m picks it up.
gnu_gcc_tc = gnu_tc;
save gnu_gcc_tc gnu_gcc_tc;
RTW.TargetRegistry.getInstance('reset');
savepath()