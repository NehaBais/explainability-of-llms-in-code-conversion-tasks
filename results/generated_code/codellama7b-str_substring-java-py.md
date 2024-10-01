Here are the Python equivalents of the Java methods:

```
def substring(str, n, m=None):
    if m is None:
        return str[n:]
    else:
        return str[n:n+m]

def substring(str, n=0):
    return str[n:]

def substring(str, exclude_last_char=True):
    return str[:-1] if exclude_last_char else str

def substring(str, char, m=None):
    index = str.index(char)
    if m is None:
        return str[index:]
    else:
        return str[index:index+m+1]

def substring(str, sub, m=None):
    index = str.index(sub)
    if m is None:
        return str[index:]
    else:
        return str[index:index+m+1]
```
Note that in Python, the `substring` method can also be called with a single argument to get the entire substring starting at that index. Therefore, the second and third methods are equivalent to the Java methods.

Also note that in Python, you can use the `str[start:end]` syntax to get a substring of a string, where `start` is the starting index (inclusive) and `end` is the ending index (exclusive). If `end` is not specified, it defaults to the end of the string.
