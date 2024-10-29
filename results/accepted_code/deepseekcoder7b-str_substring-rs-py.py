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
for i in range(len(s)):
    if s[i] == "b":
        cpos = i
        print(s[cpos + 1 : cpos + m + 1])
        break

# Print 3 characters starting with "けd" (けde)
for i in range(len(s)):
    if "けd" in s[i:]:
        spos = i
        print(s[spos : spos + m])
        break
