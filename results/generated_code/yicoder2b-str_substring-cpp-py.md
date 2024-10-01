Sure, here is the equivalent code in Python:

```python
# python program to display a substring

def main():
    s = "0123456789"
    n = 3
    m = 4
    c = '2'
    sub = "456"

    print(s[n: n + m]) # display substring starting from n characters in and of m length
    print(s[n:]) # up to the end of the string
    print(s[:-1]) # whole string minus the last character
    print(s.find(c, n, n + m)) # starting from a known character within the string and of m length
    print(s.find(sub, s.index(c), s.index(c) + len(sub))) # starting from a substring within the string and of m length

if __name__ == "__main__":
    main()
```
