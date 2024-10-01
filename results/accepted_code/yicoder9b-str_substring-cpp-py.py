s = "0123456789"

n = 3
m = 4
c = "2"
sub = "456"

print(s[n : n + m])
print(s[n:])
print(s[:-1])
print(s[s.index(c) : s.index(c) + m])
try:
    print(s[s.index(sub) : s.index(sub) + m])
except ValueError:  # substring not found
    pass
