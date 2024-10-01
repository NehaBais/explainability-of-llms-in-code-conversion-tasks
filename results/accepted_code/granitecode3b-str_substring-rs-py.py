s = "abc文字化けdef"
n = 2
m = 3

# Print 3 characters starting at index 2 (cletters)
print("".join(s.chars()[n : n + m]))

# Print all characters starting at index 2 (clettersizekedef)
print("".join(s.chars()[n:]))

# Print all characters except the last (abclettersizekede)
print("".join(s.rsplit(maxsplit=1)[1:]))

# Print 3 characters starting with 'b' (bc文)
cpos = s.find("b")
print("".join(s.chars()[cpos : cpos + m]))

# Print 3 characters starting with "けd" (けde)
spos = s.find("けd")
print("".join(s.chars()[spos : spos + m]))
