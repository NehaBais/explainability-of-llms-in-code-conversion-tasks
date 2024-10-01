
Here's the equivalent code in Python:
```python
s = "hello"
s2 = s + " literal"
print(s) # prints "hello"
print(s2) # prints "hello literal"
```
In this code, we declare a string variable `s` and initialize it with the value `"hello"`. We then create another string variable `s2` by concatenating the string literal `" literal"` to the end of `s`, using the `+` operator. The resulting string is stored in `s2`. Finally, we print both `s` and `s2` using the `print()` function.

Note that in Python, strings are immutable, so we cannot modify them after they have been created. In this example, we create a new string variable `s2` by concatenating `" literal"` to the end of `s`, but then print both variables using the same `print()` function, which means that only `s` will be printed.
