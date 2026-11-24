function modelconfig1(model)
% MODELCONFIG1  Apply the HDRT/xert configuration to a Simulink model.
%
%   modelconfig1('MyModel')
%
% Settings:
%   - System target file : xert.tlc (HDRT generated main + PMU sampling)
%   - Toolchain         : use the registered coder.make toolchain
%   - Solver            : fixed-step ode3 with a 1e-6 s (1 us) base step
%   - Optimizations     : level2, prioritise speed
%
% Note: "Solver" is intentionally assigned twice. The first assignment
% selects the discrete fixed-step solver; the second replaces it with the
% fixed-step ode3 variant (SolverType remains "Fixed-step"), which is the
% combination used for the benchmark runs.

    set_param(model, "SystemTargetFile",            "xert.tlc");
    set_param(model, "UseToolchainInfoCompliant",   true);
    set_param(model, "PositivePriorityOrder",       "off");
    % Fixed-step, single-tasking execution.
    set_param(model, "Solver",                      "FixedStepDiscrete");
    set_param(model, "SolverMode",                  "SingleTasking");
    set_param(model, "SolverType",                  "Fixed-step");
    set_param(model, "FixedStep",                   "1e-6");
    % Final solver used by the generated code (fixed-step ode3).
    set_param(model, "Solver",                      "ode3");
    set_param(model, "SupportContinuousTime",       "on");
    % Speed-oriented code generation.
    set_param(model, "OptimizationLevel",           "level2");
    set_param(model, "OptimizationPriority",        "Speed");

    save_system(model);
end