Here is the Python equivalent of your C code:

```python
def concat_strings(s1, s2):
    return s1 + s2

if __name__ == "__main__":
    s = "hello"
    print(f'{s} literal')
    # or 
    print(f'{s}{" literal"}')

    s2 = concat_strings(s, ' literal'))
    print(s2)
    del s2
```
This Python code does the same as your C code: it concatenates two strings and prints the result. The `concat_strings` function is used to concatenate the strings.
