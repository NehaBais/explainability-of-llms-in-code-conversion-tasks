Sure, here is the equivalent Python code that achieves the same functionality as your Rust code:

```python
s = "abc文字化けdef"
n = 2
m = 3

# Print 3 characters starting at index 2 (c文字)
print(s[n:n + m])

# Print all characters starting at index 2 (c文字化けdef)
print(s[n:])

# Print all characters except the last (abc文字化けde)
print(s[:-1])

# Print 3 characters starting with 'b' (bc文)
cpos = s.find('b')
if cpos != -1:
    print(s[cpos:cpos + m])

# Print 3 characters starting with "けd" (けde)
spos = s.find("けd")
if spos != -1:
    print(s[spos:spos + m])
```

### Explanation:

1. **Substring starting from `n` characters in and of `m` length**:
   ```python
   print(s[n:n + m])
   ```
   
2. **Substring starting from `n` characters in, up to the end of the string**:
   ```python
   print(s[n:])
   ```

3. **Whole string minus the last character**:
   ```python
   print(s[:-1])
   ```

4. **Substring starting with a known character within the string and of `m` length**:
   - Find the position of the character 'b'.
   - If found, print the substring from that position to `m` characters ahead.
   
5. **Substring starting with a known substring within the string and of `m` length**:
   - Find the position of the substring "けd".
   - If found, print the substring from that position to `m` characters ahead.

This Python code handles Unicode characters by using slicing and the `find` method, which work on logical characters (code points) rather than 8-bit or 16-bit code units.
