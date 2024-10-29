The equivalent Python code for this JavaScript snippet would be -

```python
original = "Mary had a X lamb."
little = "big"
replaced = original.replace('X', little)
print(replaced)  # output will be 'Mary had a big lamb.'
```

In Python, the `str.replace()` function is used for string replacement similar to JavaScript's `String.prototype.replace()` method. It replaces all occurrences of the specified "old" substring with the "new" one in the original string and returns a new string without modifying the original string.

