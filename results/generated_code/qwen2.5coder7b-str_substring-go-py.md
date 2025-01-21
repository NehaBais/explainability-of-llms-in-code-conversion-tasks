Here is your Go code converted to Python:

```python
# Display a substring:
# - starting from n characters in and of m length;
# - starting from n characters in, up to the end of the string;
# - whole string minus last character;
# - starting from a known character within the string and of m length;
# - starting from a known substring within the string and of m length.

s = "ABCDEFGH"
n, m = 2, 3

# for reference
print("Index: ", "01234567")
print("String:", s)

# starting from n characters in and of m length
print(f"Start {n}, length {m}:    {s[n:n+m]}")

# starting from n characters in, up to the end of the string
print(f"Start {n}, to end:      {s[n:]}")

# whole string minus last character
print(f"All but last:         {s[:-1]}")

# starting from a known character within the string and of m length
dx = s.index('D')
print(f"Start 'D', length {m}:  {s[dx:dx+m]}")

# starting from a known substring within the string and of m length
sx = s.find("DE")
print(f'Start "DE", length {m}: {s[sx:sx+m]}')
```

This Python code performs the same operations as your Go code. It references logical characters (code points), not 8-bit code units for UTF-8 or 16-bit code units for UTF-16, and handles all Unicode characters that are valid in Python.
