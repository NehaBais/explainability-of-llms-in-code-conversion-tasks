Here's the Python code that achieves the same result as the given Rust code:
```
s = "abc文字化けdef"
n = 2
m = 3

# Print 3 characters starting at index 2 (cletters)
print(''.join(s.chars()[n:n+m]))

# Print all characters starting at index 2 (clettersizekedef)
print(''.join(s.chars()[n:]))

# Print all characters except the last (abclettersizekede)
print(''.join(s.rsplit(maxsplit=1)[1:]))

# Print 3 characters starting with 'b' (bc文)
cpos = s.find('b')
print(''.join(s.chars()[cpos:cpos+m]))

# Print 3 characters starting with "けd" (けde)
spos = s.find("けd")
print(''.join(s.chars()[spos:spos+m]))
```
Note that in Python, the `rsplit()` method splits a string from the right and takes an optional argument `maxsplit` which specifies the maximum number of splits to perform. If not specified, it splits until the end of the string. So, we need to use `1:)` to exclude the last character from the resulting list of characters.

