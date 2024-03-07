local function add_two(a, b)
    return a + b
end


local i = io.read("n")
print(i)
for x = i,  0, -1 do
    add_two(1, 1)
    if x == 1 or x == (i/2) then
        print(x)
    end
end
