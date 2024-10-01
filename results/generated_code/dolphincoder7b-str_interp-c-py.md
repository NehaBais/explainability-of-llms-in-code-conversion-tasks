This is a basic example of string interpolation in C. However, Python's f-string feature provides similar functionality which can be used to interpolate variables or expressions into strings directly. Here is the equivalent code in Python:
```python
extra = "little"
print(f"Mary had a {extra} lamb.")
```
In this example, `f` before a string makes it an f-string (formatted string literal), where curly braces are replaced with the values of variables that have been defined or computed within them. Here, `{extra}` is replaced with the value of variable `extra`. The result is the same as in C: "Mary had a little lamb."
