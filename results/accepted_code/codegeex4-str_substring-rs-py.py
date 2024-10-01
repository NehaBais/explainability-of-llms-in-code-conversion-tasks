s = "abc文字化けdef"
n = 2
m = 3

# Print 3 characters starting at index 2 (c文字)
print("".join(list(s[n : n + m])))

# Print all characters starting at index 2 (c文字化けdef)
print("".join(list(s[n:])))

# Print all characters except the last (abc文字化けde)
print("".join(list(reversed(s)))[1:])

# Print 3 characters starting with 'b' (bc文)
cpos = s.find("b")
print("".join(list(s[cpos : cpos + m])))

# Print 3 characters starting with "けd" (けde)
spos = s.find("けd")
print("".join(list(s[spos : spos + m])))
