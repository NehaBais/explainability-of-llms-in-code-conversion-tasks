The equivalent Python code for the given Golang code is as follows:

```python
def main(): 
    s = "ABCDEFGH"
    n, m = 2, 3

    # For reference
    print("Index: ", "01234567")
    print("String:", s)

    # Starting from n characters in and of m length
    print(f"Start {n}, length {m}: \t{s[n : n+m]}")

    # Starting from n characters in, up to the end of the string
    print(f"Start {n}, to end: \t\t{s[n:]}")

    # Whole string minus last character
    print(f"All but last: \t\t{s[:len(s)-1]]}")

    # Starting from a known character within the string and of m length
    dx = s.index('D')
    print(f"Start 'D', length {m}: \t{s[dx : dx+m]}")

    # Starting from a known substring within the string and of m length
    sx = s.index("DE")
    print(f"`Start \"DE\", length {m}: \t{s[sx : sx+m]}}`n")

if __name__ == "__main__":
    main()
```

This Python code will produce the same output as the given Golang code.
