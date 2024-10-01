Here is the equivalent Python code for the Java functions:

Python (uses UTF-8):
```python
def substring(s, n=0, m=None):
    if m is None:
        return s[n]
    else:
        return s[n:n+m]

def substring_starting_with_index(s, n, m=None):
    if m is None:
        return s[n:]
    else:
        return s[n:n+m]

def substring_minus_last_char(s):
    return s[:-1]

def substring_starting_with_char(s, c, m=None):
    if m is None:
        i = s.index(c)
    else:
        i = s.index(c)+m
    return s[i:i+m+1]

def substring_starting_with_substr(s, substr, m=None):
    if m is None:
        i = s.find(substr)
    else:
        i = s.find(substr)+m
    return s[i:i+m+1]
```

Please note that the Python version uses 0-based indexing, which is similar to Java's 0-based indexing. For `substring_starting_with_index`, the start index is inclusive but end index is exclusive just like in Java's substring method.
