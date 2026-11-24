%% Build and register the LLVM/Clang toolchain.
%% Saves llvm_clang_tc.mat next to this file; rtwTargetInfo.m picks it up.
llvm_clang_tc = clang_tc;
save llvm_clang_tc llvm_clang_tc;
RTW.TargetRegistry.getInstance('reset');
savepath()
