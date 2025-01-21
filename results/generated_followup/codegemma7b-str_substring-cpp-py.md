The error occurs because the syntax for slicing with a stop argument involving a expression is incorrect in Python. The fix is to use `s[s.find(c):s.find(c)+m]` instead of `s.find(c):m+s.find(c)`.

```python
s = "0123456789"

n = 3
m = 4
c = '2'
sub = "456"

print(s[n:n+m])
print(s[n:])
print(s[:-1])
print(s[s.find(c):s.find(c)+m])
print(s[s.find(sub):s.find(sub)+m])
```
