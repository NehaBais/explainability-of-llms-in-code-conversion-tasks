Here is the equivalent Python code:

```python
def print_substring(s, n, m=None):
    if m is None:  # if no length is specified, take the rest of the string
        m = len(s) - n
    return s[n:n+m]

s = "abc文字化けdef"
print(print_substring(s, 2))                 # Print 3 characters starting at index 2 (c文字)
print(print_substring(s, 2))                 # Print all characters starting at index 2 (c文字化けdef)
print(print_substring(s, 0, len(s)-1))      # Print all characters except the last (abc文字化けde)

cpos = s.find('b')
if cpos != -1:
    print(print_substring(s, cpos))          # Print 3 characters starting with 'b' (bc文)

spos = s.find("けd")
if spos != -1:
    print(print_substring(s, spos))          # Print 3 characters starting with "けd" (けde)
```

This Python code does the same thing as your Rust code. It has a helper function `print_substring()` which takes the string and indices to print substring from. If length is not specified, it defaults to the rest of the string.
