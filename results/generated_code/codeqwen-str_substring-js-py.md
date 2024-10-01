In Python, you can use slicing to achieve the same results as shown in the JavaScript code:

```python
def get_substring(s, n, m=None):
    if m is None:
        m = len(s) - n
    return s[n:n+m]

str = "abcdefgh"

n = 2
m = 3

#  * starting from n characters in and of m length;
print(get_substring(str, n, m))  # => "cde"

#  * starting from n characters in, up to the end of the string;
print(get_substring(str, n))  # => "cdefgh"

#  * whole string minus last character;
print(get_substring(str, 0, len(str) - 1))  # => "abcdefg"

#  * starting from a known character within the string and of m length;
print(get_substring(str, str.index('b'), m))  # => "bcd"

#  * starting from a known substring within the string and of m length. 
print(get_substring(str, str.index('bc'), m))  # => "bcd"
```

Here is the Python version of your JavaScript code. In this function `get_substring()`, we use slicing to get a substring from `s` starting at position `n` and for `m` characters. If `m` is not specified (i.e., it is `None`), then it defaults to the length of `s` minus `n`.

This function works with any Unicode string, as Python's strings are unicode by default and slicing operations in Python work on logical character positions, not on 8-bit or 16-bit code units.
