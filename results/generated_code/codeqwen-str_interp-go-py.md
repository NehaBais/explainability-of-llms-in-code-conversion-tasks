The equivalent code in Python would be:

```python
def replace_in_string(original_str, value):
  return original_str % value

print(replace_in_string("Mary had a %s lamb", "big"))
```

Here `%s` is the placeholder for the variable `value`, and `%` operator performs the interpolation. The `replace_in_string` function replaces the placeholder in the original string with the provided value, and then prints it out.
