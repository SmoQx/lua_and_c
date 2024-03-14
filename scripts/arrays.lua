local function arrays(numbers, ...)
    local test = ...
    print(type(numbers))
    print(type(...))
    if type(test) == "table" then
        local array = {}
        for key, value in pairs(...) do
            table.insert(array, value)
        end
        return array
    end
    local array = {...}
    array[5] = 10
    print(numbers)
    return array
end


for key, value in pairs(arrays(10, 10, 10, 11)) do
    print(key.." "..value)
end
