In Python, you can use f-strings (formatted string literals)) to achieve similar functionality as JavaScript's `String.prototype.replace()` method with a regular expression and the `g` flag set).

Here is how you could translate your JavaScript code into Python:
```python
original = "Mary had a X lamb"
little = "little"
# Note the use of f-string for string interpolation
replaced = f"{original.replace('X', little)}"
print(replaced)
```
This will output: `"Mary had a little lamb"`
