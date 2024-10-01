```python
def display_substring():
    s = "ABCDEFGH"
    n, m = 2, 3
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
    print(f"Start 'D', length {m}:  {s[dx : dx+m]}")
    # starting from a known substring within the string and of m length
    sx = s.index("DE")
    print(f"Start \"DE\", length {m}: {s[sx : sx+m]}")

display_substring()
```
