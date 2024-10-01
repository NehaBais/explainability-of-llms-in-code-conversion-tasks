import re

s = "0123456789"

n = 3
m = 4
c = "2"
sub = "456"

print(s[n : n + m])
print(s[n:])
print(s[:-1])
print(s[s.find(c) : n + m])
print(
    re.search(sub, s).start()
)  # We use re.search to get the index of the substring in the string and then slice from n to that index + m
