Sure, here is the equivalent Python code for the given Rust requirement:

```python
s = "abc文字化けdef"
n = 2
m = 3

# Print 3 characters starting at index n (c字符)
print(s[n:n+m])

# Print all characters starting at index n (bc字符化けdef)
print(s[n:])

# Print all characters except the last (abc字符化けde)
print(''.join(list(reversed(s))[1:]))

# Print 3 characters starting with 'b' (bc字符化けdef)
cpos = s.index('b')
if cpos is not None: print(s[cpos:cpos+m])

# Print 3 characters starting with "けd" (けde)
spos = s.find("けd")
if spos is not None: print(s[spos:spos+m])
```
