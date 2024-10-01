s = "abc文字化けdef"
n = 2
m = 3

# Print 3 characters starting at index 2 (c文字)
print(s[n : n + m])

# Print all characters starting at index 2 (c文字化けdef)
print(s[n:])

# Print all characters except the last (abc文字化けde)
print(s[:-1])

# Print 3 characters starting with 'b' (bc文)
cpos = s.find("b")
if cpos != -1:
    print(s[cpos : cpos + m])

# Print 3 characters starting with "けd" (けde)
spos = s.find("けd")
if spos != -1:
    print(s[spos : spos + m])
