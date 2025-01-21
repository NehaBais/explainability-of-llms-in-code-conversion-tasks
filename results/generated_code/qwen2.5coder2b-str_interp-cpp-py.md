The equivalent code in Python is as follows:

```python
def replace_value_in_string(original, to_be_replaced, replacement):
    original = original.replace(to_be_replaced, replacement)
    return original

original = "Mary had a X lamb."
toBeReplaced = "X"
replacement = "little"

print(replace_value_in_string(original, toBeReplaced, replacement))
```
The function `replace_value_in_string` takes three arguments - the original string, the character sequence to replace and the new value. It then returns the modified string after replacing the character sequence with the new value. This is similar to the C++ code but in Python.
