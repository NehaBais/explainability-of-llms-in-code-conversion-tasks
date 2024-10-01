In Python, you can use the `str` class for dealing with text strings and Unicode characters. Here's an example of how to display a substring in Python:

```python
s = "abc文字化けdef"
n = 2
m = 3

# Print 3 characters starting at index 2 (c文字)
print(s[n : n + m])

# Print all characters starting at index 2 (c文字化けdef)
print(s[n:])

# Print all characters except the last (abc文字化けde)
print(s[:-1])

# Print 3 characters starting with 'b' (bc文)
cpos = s.find('b')
print(s[cpos : cpos + m])

# Print 3 characters starting with "けd" (けde)
spos = s.find("けd")
print(s[spos : spos + m])
```

Note that Python's `str` class is already capable of dealing with Unicode, so no additional encoding or decoding steps are required. Additionally, logical characters are already strings in Python, so there's no need to convert them into code points or vice versa.
