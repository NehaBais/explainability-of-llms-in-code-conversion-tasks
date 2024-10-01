In Python, the equivalent of this code would be:

```python
def main():
    str = "Mary had a {} lamb"
    txt = "little"
    out = str.format(txt)
    print(out)

if __name__ == "__main__":
    main()
```

This is because in Python, the `%s` symbol in string formatting is used to represent a placeholder for substitution values (which are typically strings). The `str.format()` method can be used to replace the placeholders with specific values or variables.
