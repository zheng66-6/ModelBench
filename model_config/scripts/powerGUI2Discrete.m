function powerGUI2Discrete(model_name)
% POWERGUI2DISCRETE  Set every Powergui block in a model to Discrete mode.
% The sample time (SampleTime) is set to 1e-6 s (1 us).
%
% Input:
%   model_name - Simulink model name (for example 'my_model')

    if ~bdIsLoaded(model_name)
        load_system(model_name);
    end

    % Preferred lookup: match by ReferenceBlock, searching through masks and
    % library links as well.
    pg_blocks = find_system(model_name, ...
        'LookUnderMasks', 'all', ...
        'FollowLinks', 'on', ...
        'ReferenceBlock', 'powerlib/powergui');
        
    % Fallback: if the ReferenceBlock search found nothing, match by name.
    if isempty(pg_blocks)
        pg_blocks = find_system(model_name, ...
            'LookUnderMasks', 'all', ...
            'FollowLinks', 'on', ...
            'RegExp', 'on', ...
            'Name', '(?i)powergui');
    end

    if isempty(pg_blocks)
        fprintf('Warning: Still no Powergui blocks found in model ''%s''.\n', model_name);
        return;
    end

    % Configure every Powergui block found.
    for i = 1:length(pg_blocks)
        block = pg_blocks{i};
        set_param(block, 'SimulationMode', 'Discrete');
        set_param(block, 'SampleTime', '1e-6');
        fprintf('Configured Powergui block: %s\n', block);
    end
    
    fprintf('Successfully configured %d Powergui block(s).\n', length(pg_blocks));
    
end
