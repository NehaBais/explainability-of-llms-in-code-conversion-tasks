 Sure! Here is the equivalent Python code for the provided Go program:

```python
def main():
    s = "ABCDEFGH"
    n, m = 2, 3
    
    # Displaying the string and index for reference
    print("Index:", "01234567")
    print("String:", s)
    
    # Starting from n characters in and of m length
    print(f"Start {n}, length {m}:    {s[n:n+m]}")
    
    # Starting from n characters in, up to the end of the string
    print(f"Start {n}, to end:      {s[n:]}")
    
    # Whole string minus the last character
    print(f"All but last:         {s[:-1]}")
    
    # Starting from a known character within the string and of m length
    dx = s.find('D')
    if dx != -1:
        print(f"Start 'D', length {m}:  {s[dx:dx+m]}")
    
    # Starting from a known substring within the string and of m length
    sx = s.find("DE")
    if sx != -1:
        print(f'Start "DE", length {m}: {s[sx:sx+m]}')

if __name__ == "__main__":
    main()
```

This Python code performs the same operations as the Go program, including displaying substrings based on different criteria. The `find` method is used to locate the starting index of the known character or substring, and then slicing is applied to get the desired substring length.
