Sure! Here's the Python code that satisfies the requirements you mentioned:
```python
import string
print("Index:", "".join(range(10)))
print("String:", "ABCDEFGH")
# starting from n characters in and of m length
n, m = 2, 3
print(f"Start {n}, length {m}: {string[n:n+m]}")
# starting from n characters in, up to the end of the string
print(f"Start {n}, to end: {string[n:]}")
# whole string minus last character
print(f"All but last: {string[:-1]}")
# starting from a known character within the string and of m length
dx = string.find("D")
print(f"Start 'D', length {m}: {string[dx:dx+m]}")
# starting from a known substring within the string and of m length
sx = string.find("DE")
print(f"Start \"DE\", length {m}: {string[sx:sx+m]}")
```
This code uses the `string` module to handle strings, which is part of Python's standard library. The `string.find()` function is used to find the index of a substring within a string, and the `string[start:end]` syntax is used to extract a substring from a string. Note that the length parameter in the `string.find()` function is measured in characters, not bytes.

