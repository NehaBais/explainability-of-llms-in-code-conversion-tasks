In Python, the equivalent code would look like this:

```python
def substring(s, n, m):
    # Print 3 characters starting at index 2 (c文字)
    print(''.join(s[n:n+m]))

    # Print all characters starting at index 2 (c文字化けdef)
    print(''.join(s[n:]))

    # Print all characters except the last (abc文字化けde)
    print(s[::-1][n+1:-1])

    # Print 3 characters starting with 'b' (bc文)
    cpos = s.find('b')
    if cpos != -1:
        print(''.join(s[cpos:cpos+m]))

    # Print 3 characters starting with "けd" (けde)
    spos = s.find("けd")
    if spos != -1:
        print(''.join(s[spos:spos+m]))
```
Note that this code assumes that `s` is a Python string and does not involve conversion between different encodings such as UTF-8 or UTF-16. It also doesn't handle characters outside the Basic Multilingual Plane (BMP) separately.
