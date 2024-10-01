Here is the equivalent Python code for your C program:

```python
def substring(s, n, m):
    if s == None: return None
    if m < 0: m = len(s) + m - n + 1
    if n < 0 or m < 0: return None
    s = s[n:] if n > 0 else s
    return s[:m]

def str_wholeless1(s):
    return substring(s, 0, len(s) - 1)

def str_fromch(s, ch, m):
    pos = s.find(ch)
    if pos == -1: return None
    return substring(s, pos, m)

def str_fromstr(s, in_str, m):
    pos = s.find(in_str)
    if pos == -1: return None
    return substring(s, pos, m)

# Test cases
s = "hello world shortest program"
print(substring(s, 12, 5))   # get "short"
print(substring(s, 6, -1))   # get "world shortest program"
print(str_wholeless1(s))     # get "... progra"
print(str_fromch(s, 'w', 5)) # get "world"
print(str_fromstr(s, "ro", 3)) # get "rog"
```

The above Python code assumes that the input string `s` is Unicode and can handle any valid Unicode character. The function `substring()` gets a substring starting from the n-th character to the m-th length. The function `str_wholeless1()` returns a string without its last character.
The functions `str_fromch()` and `str_fromstr()` return substrings from specified characters or substrings, respectively.
