Here is the equivalent Python code for your Java methods:

```python
def substring(str, n, m):
    return str[n:n+m]

def substring(str, n):
    return str[n:]

def substring(str):
    return str[:-1]

def substring(str, c, m):
    start = str.index(c)
    end = start + m + 1
    return str[start:end]]

def substring(str, sub, m):
    start = str.index(sub)
    end = start + m + 1
    return str[start:end]]
```
These Python functions are equivalent to the Java functions you provided in your question. Each function takes a string and some integers or characters as arguments and returns a substring of the input string that starts at one of the specified indexes or positions, and is of length `m`. Note that the index `n` in the first two functions refers to the zero-based index position in the string where the substring should start. Also note that the last character of the string is excluded while calculating the substring for the last function call.
