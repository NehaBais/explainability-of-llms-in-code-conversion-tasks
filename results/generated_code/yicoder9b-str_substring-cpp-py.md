Here is the equivalent Python code for your C++ program: 

```python
s = "0123456789"

n = 3
m = 4
c = '2'
sub = "456"

print(s[n:n+m])
print(s[n:])
print(s[:-1])
print(s[s.index(c):s.index(c)+m])
try:
    print(s[s.index(sub):s.index(sub)+m])
except ValueError:  # substring not found
    pass
```
Python's string slicing mechanism works on the same principle as C++'s, but it uses different syntax and semantics. The slicing operation `[n:m]` returns a new string that includes all characters starting from index `n` up to (but excluding) index `m`. This matches the behavior of the corresponding C++ function `substr(n, m)`.
Please note the usage of `index()` method which is equivalent to finding the index in python but it will raise ValueError if substring not found. To avoid this we used a try-except block.
