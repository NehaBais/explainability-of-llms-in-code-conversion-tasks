Sure, here is the equivalent code in Python:

```python
# Using built-in string function 'join' to concatenate two strings
str = "my String"
cstr = "Changed "
str = cstr + str
print(str)
```
In this code, the `+` operator is used for string concatenation in Python. Note that unlike C, Python does not require manually allocating memory and freeing it, so there's no need to use `free()` with dynamic strings in Python like we do in C.
