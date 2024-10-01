Here is the equivalent Python code for the given Java code: 
This Python code uses slicing to achieve each of the specified requirements and also respects Unicode code point reference rather than specific byte sequence.

```python
def substring(str, n, m):
    return str[n: n+m]

def substring(str, n):
    return str[n:]

def substring(str):
    return str[:-1]

def substring(str, c, m):
    index = str.index(c) 
    return str[index: index+m+1]

def substring(str, sub, m):
    index = str.index(sub)
    return str[index: index+m+len(sub)]
```
Note that in Python string slicing if the end value is beyond the range of indexes it will not give any error and also Python has built-in functions `str.index()` to find a substring or character within a string. Also, slicing in Python is zero-based hence there's no need to subtract 1 from start index for Java substring method.
