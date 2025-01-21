 Sure, here is the equivalent Python code for the given Rust code:

```python
s = "abc文字化けdef"
n = 2
m = 3

# Print 3 characters starting at index 2 (c文字)
print(s[n:n+m])

# Print all characters starting at index 2 (c文字化けdef)
print(s[n:])

# Print all characters except the last (abc文字化けde)
print(s[:-1])

# Print 3 characters starting with 'b' (bc文)
cpos = s.find('b')
if cpos != -1:
    print(s[cpos:cpos+m])

# Print 3 characters starting with "けd" (けde)
spos = s.find("けd")
if spos != -1:
    print(s[spos:spos+m])
```

This Python code should perform the same operations as the Rust code, including displaying substrings based on different criteria:

1. Starting from index `n` and of length `m`.
2. Starting from index `n` up to the end of the string.
3. The whole string minus the last character.
4. Starting from a known character 'b' within the string and of length `m`.
5. Starting from a known substring "けd" within the string and of length `m`.

Note that Python strings are indexed by Unicode code points, which means you can directly slice them using indices or find methods to locate substrings.
