Here is the Python code that meets the requirements:
```python
s = "ABCDEFGH"
n, m = 2, 3
# for reference
print("Index: ", "01234567")
print("String:", s)
# starting from n characters in and of m length
print(f"Start {n}, length {m}:    {s[n : n+m]}")
# starting from n characters in, up to the end of the string
print(f"Start {n}, to end:      {s[n:]}")
# whole string minus last character
print(f"All but last:         {s[:-1]}")
# starting from a known character within the string and of m length
dx = s.index("D")
print(f"Start 'D', length {m}:  {s[dx : dx+m]}")
# starting from a known substring within the string and of m length
sx = s.find("DE")
print(f"Start \"DE\", length {m}: {s[sx : sx+m]}")
```
Note: The Python `index()` method returns the first index of the specified character in the string, while the `find()` method returns the index of the first occurrence of the specified substring. Both methods raise a `ValueError` if the substring is not found in the string.

