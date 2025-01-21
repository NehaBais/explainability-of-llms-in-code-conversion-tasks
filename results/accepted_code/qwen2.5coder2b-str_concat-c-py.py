def sconcat(s1, s2):
    return s1 + s2


s = "hello"
print(f"'{s}' literal")
print(f"'{s} literal'")
s2 = sconcat(s, " literal")
print(s2)
del s2
