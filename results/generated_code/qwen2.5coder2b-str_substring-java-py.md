Sure, here is the Python equivalent of your Java code:

```python
def substring(str, n, m=0):
    if 0 <= n < len(str) and 0 <= m <= (len(str) - n):
        return str[n:n+m]
    else:
        return ""

def substring_from_char(str, c, m=0):
    index = str.find(c)
    if index != -1 and index + m + 1 <= len(str):
        return str[index:index+m+1]
    else:
        return ""

def substring_from_substring(str, sub, m=0):
    index = str.find(sub)
    if index != -1 and index + m + 1 <= len(str):
        return str[index:index+m+1]
    else:
        return ""
```

In Python, the `substring` function takes an optional second parameter `m`, which defaults to 0. It ensures that the starting point is within the bounds of the string. The function returns a substring with length `m` if it exists; otherwise, it returns an empty string.

The `substring_from_char` and `substring_from_substring` functions use the built-in Python `find` method to get the index of the character or substring and then return a substring of that length. Again, they ensure that the starting point is within the bounds of the string before returning the substring.
