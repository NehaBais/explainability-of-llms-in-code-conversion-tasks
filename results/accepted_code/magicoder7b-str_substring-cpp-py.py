s = "0123456789"
n, m = 3, 4
c, sub = "2", "456"

print(s[n:m])  # prints "3456"
print(s[n:])  # prints "3456789"
print(s[:-1])  # prints "012345678"
print(s[s.find(c) : m])  # prints "456"
print(s[s.find(sub) : m])  # prints "456"
