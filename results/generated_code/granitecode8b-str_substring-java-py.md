Here is the Python code that meets the requirements:
```python
def substring(s, n, m=None):
 if m is not None:
 return s[n:n+m]
 else:
 return s[n:]
 
def substring_last(s):
 return s[:-1]
 
def substring_char(s, c, m):
 i = s.index(c)
 j = i + m + 1
 return s[i:j]
 
def substring_sub(s, sub, m):
 i = s.index(sub)
 j = i + m + 1
 return s[i:j]
```
Note that in Python, the `str` type represents a sequence of Unicode characters, not 8-bit code units for UTF-8 or 16-bit code units for UTF-16. This means that the `substring()` function can handle any valid Unicode character, whether in the Basic Multilingual Plane or above it.

