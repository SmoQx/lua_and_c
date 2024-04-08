local function show_lines(text, my_string)
    local env_variables = os.getenv("PATH")
    local lenght_of_a_strign = string.len(text)
    print(text.." ".."was injected "..lenght_of_a_strign.."\n"..env_variables)
    env_variables = tostring(env_variables)
    print(type(env_variables))
    print(string.len(env_variables))
    for i = 1, (string.len(env_variables) - string.len(my_string) + 1), 1 do
        if (string.sub(env_variables, i, i+string.len(my_string) - 1) == my_string) then
            print("Found a "..my_string.." in env at "..i)
        end
    end
end


show_lines("thats my text to the function", "smoq")
