```python
def substring(str, n, m):
    return str[n:n+m]

def substring(str, n):
    return str[n:]

def substring(str):
    return str[:-1]

def substring(str, c, m):
    index = str.index(c)
    return str[index:index+m+1]

def substring(str, sub, m):
    index = str.index(sub)
    return str[index:index+m+1]
```
