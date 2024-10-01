s = "0123456789"

n = 3
m = 4
c = "2"
sub = "456"

print(s[n : n + m])
print(s[n:])
print(s[:-1])
pos_c = s.find(c)
if pos_c != -1 and pos_c + m <= len(s):
    print(s[pos_c : pos_c + m])
else:
    print("Character not found or substring out of range")
pos_sub = s.find(sub)
if pos_sub != -1 and pos_sub + m <= len(s):
    print(s[pos_sub : pos_sub + m])
else:
    print("Substring not found or substring out of range")
