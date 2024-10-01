 The equivalent code in Python would be:

```python
def sconcat(s1, s2):
    return s1 + s2

if __name__ == "__main__":
    s = "hello"
    
    print(f'{s} literal') # or 
    print(s + ' literal')
    
    s2 = sconcat(s, " literal")
    print(s2)
```
This Python code does the same thing as the C code: it creates two strings (`s` and `s2`), concatenates them with another string literal (or a formatted string using f-string), and prints out each of them. The function `sconcat()` is used to mimic the behaviour of `sconcat()` in C, which returns a new string by concatenating the two input strings.
