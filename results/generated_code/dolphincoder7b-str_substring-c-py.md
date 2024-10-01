```python
def substring(s: str, n: int, m: int) -> str:
    # check for null s 
    if s is None:
        return None

    # negative m to mean 'up to the mth char from right' 
    if m < 0: 
        m = len(s) + m - n + 1

    # n < 0 or m < 0 is invalid 
    if n < 0 or m < 0:
        return None

    # make sure string does not end before n
    # and advance the "s" pointer to beginning of substring
    for _ in range(n): 
        s = s[1:]
        if s == '': 
            # string ends before n: invalid
            return None

    result = s[:m]  # strncat() will automatically add null terminator
    # if string ends early or after reading m characters 
    return result

def str_wholeless1(s: str) -> str:
    return substring(s, 0, len(s)-1)

def str_fromch(s: str, ch: int, m: int) -> str:
    i = s.find(chr(ch))
    if i < 0: 
        return None
    return substring(s, i, m)

def str_fromstr(s: str, in_: str, m: int) -> str:
    i = s.find(in_) 
    if i < 0: 
        return None
    return substring(s, i, m)


# Test the functions
s = "hello world shortest program"
print(substring(s, 12, 5))            # get "short"
print(substring(s, 6, -1))             # get "world shortest program"
print(str_wholeless1(s))               # get "... progra"
print(str_fromch(s, ord('w'), 5))      # get "world"
print(str_fromstr(s, "ro", 3))         # get "rog"
```
