```python
def main():
    s = "ABCDEFGH"

    n = 2
    m = 3

    # For reference
    print("Index: ", "01234567")
    print("String:", s)

    # Starting from n characters in and of m length
    print(f"Start {n}, length {m}: {s[n:n+m]}")

    # Starting from n characters in, up to the end of the string
    print(f"Start {n}, to end: {s[n:]}")

    # Whole string minus last character
    print(f"All but last:         {s[:-1]}")

    # Starting from a known character within the string and of m length
    dx = s.find('D')
    if dx != -1:
        print(f"Start 'D', length {m}: {s[dx:dx+m]}")
    
    # Starting from a known substring within the string and of m length
    sx = s.find("DE")
    if sx != -1:
        print(f"Start 'DE', length {m}: {s[sx:sx+m]}")


if __name__ == "__main__":
    main()
```
This Python program is equivalent to the Go code provided. It uses the built-in `find` method of string objects to locate the specified characters and substrings, and the slice operator to extract the desired substrings. Note that the slicing in Python starts from index 0, so it's adjusted accordingly.
