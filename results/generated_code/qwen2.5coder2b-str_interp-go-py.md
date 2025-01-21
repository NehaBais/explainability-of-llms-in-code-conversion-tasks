The equivalent code in Python would be:

```python
def string_interpolation():
    str = "Mary had a {} lamb"
    txt = "big"
    return str.format(txt)

print(string_interpolation())
```

This function `string_interpolation` takes in two parameters: `str`, which is the template string, and `txt`, which is the value to replace the variable with. It then uses Python's built-in `format()` function to replace the placeholder `{}` in the string with the value of `txt`. Finally, it returns the resulting string.
