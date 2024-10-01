def sconcat(s1, s2):
    return f"{s1}{s2}"


s = "hello"

print(f"{s} literal")
# or
print(f'{s}" literal"')

s2 = sconcat(s, " literal")
print(s2)
