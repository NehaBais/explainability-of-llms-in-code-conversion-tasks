 Sure! Here is the equivalent Python code for the provided Java methods:

```python
def substring_n_m(s: str, n: int, m: int) -> str:
    return s[n:n + m]

def substring_n(s: str, n: int) -> str:
    return s[n:]

def substring_without_last(s: str) -> str:
    return s[:-1]

def substring_char_m(s: str, c: str, m: int) -> str:
    start = s.find(c)
    if start != -1:
        return s[start:start + m + 1]
    return ""

def substring_sub_m(s: str, sub: str, m: int) -> str:
    start = s.find(sub)
    if start != -1:
        return s[start:start + m + 1]
    return ""
```

These Python functions correspond to the Java methods you provided. Each function takes a string `s` and additional parameters as specified in your requirements. The functions handle UTF-8 or UTF-16 encoded strings, ensuring they work with any valid Unicode code point.
