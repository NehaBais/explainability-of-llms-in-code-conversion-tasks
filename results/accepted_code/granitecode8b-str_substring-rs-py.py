s = "abc文字化けdef"
n = 2
m = 3
# Print 3 characters starting at index 2 (c文字)
print(s[n : n + m])
# Print all characters starting at index 2 (cletters化cedef)
print(s[n:])
# Print all characters except the last (abclettersizecedef)
print(s[::-1][1:])
# Print 3 characters starting with 'b' (bc文)
cpos = s.find("b")
print(s[cpos : cpos + m])
# Print 3 characters starting with " Ce" ( Cede)
spos = s.find("Ce")
print(s[spos : spos + m])
