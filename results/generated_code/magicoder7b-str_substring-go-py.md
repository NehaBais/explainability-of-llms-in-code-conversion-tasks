 Here is the equivalent Python code for your Golang program:

```python
def main():
    # string to test on 
    s = "ABCDEFGH"
    
    n, m = 2, 3
    
    print("Index: ", "01234567")
    print("String:", s)

    # starting from n characters in and of m length
    print(f'Start {n}, length {m}:    {s[n : n+m]}')

    # starting from n characters in, up to the end of the string
    print(f'Start {n}, to end:      {s[n:]}')

    # whole string minus last character
    print(f'All but last:         {s[:len(s)-1]}')
    
    dx = s.index('D')  # starting from a known character within the string and of m length
    print(f'Start \'D\', length {m}:  {s[dx : dx+m]}')
    
    sx = s.find('DE')  # starting from a known substring within the string and of m length
    print(f'Start "DE", length {m}: {s[sx : sx+m]}')

if __name__ == '__main__':
    main()
```
This Python code does exactly the same operations as your Golang code, but with some minor differences. The `index` method in python is used to find the index of a specific character in a string. The `find` function can be used to find the index of a substring in a string.
