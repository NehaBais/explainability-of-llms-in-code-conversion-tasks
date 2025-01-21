s = "0123456789"

n = 3
m = 4
c = "2"
sub = "456"

print(s[n : n + m])
print(s[n:])
print(s[:-1])
print(s[s.find(c) : s.find(c) + m])
print(s[s.find(sub) : s.find(sub) + m])
