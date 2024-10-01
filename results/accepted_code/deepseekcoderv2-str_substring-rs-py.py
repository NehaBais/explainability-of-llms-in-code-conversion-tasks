s = "abc文字化けdef"
n = 2
m = 3
print(s[n : n + m])
print(s[n:])
print(s[:-1])
print(s[1:].find("d") + 1)
print(s.find("けd"))
