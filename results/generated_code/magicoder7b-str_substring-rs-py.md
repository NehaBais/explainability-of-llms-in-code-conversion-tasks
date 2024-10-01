 In Python, we can use the `slice` function to accomplish similar string manipulations as in Rust.

Here is a rough equivalent of your Rust code translated into Python:

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
Please note that Python uses a different approach to handle strings than Rust. In Python, we use Unicode code points instead of 8-bit or 16-bit code units. Also, the string indexing in python does not require us to explicitly mention whether it's utf-8 or utf-16.
