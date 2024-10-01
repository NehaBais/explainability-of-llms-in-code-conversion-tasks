```python
s = "ABCDEFGH"
n, m = 2, 3

# starting from n characters in and of m length
print(s[n:n+m])

# starting from n characters in, up to the end of the string
print(s[n:])

# whole string minus last character
print(s[:-1])

# starting from a known character within the string and of m length
dx = s.index('D')
print(s[dx:dx+m])

# starting from a known substring within the string and of m length
sx = s.index("DE")
print(s[sx:sx+m])
```
