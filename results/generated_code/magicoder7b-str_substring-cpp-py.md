 The following is the Python equivalent of your C++ code:

```python
s = '0123456789'
n, m = 3, 4
c, sub = '2', '456'

print(s[n:m]) # prints "3456"
print(s[n:])  # prints "3456789"
print(s[:-1]) # prints "012345678"
print(s[s.find(c):m]) # prints "456"
print(s[s.find(sub):m])  # prints "456"
```

In this Python program, `n`, `m` and `c` are the starting index (0-indexed), length of substring or character to slice the string with respectively. `s[:-1]` will print all characters in `s` except for the last one.
