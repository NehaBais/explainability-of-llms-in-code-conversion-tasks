 Here's the equivalent Python code for the given C function:

```python
def print_logic(a, b):
    print(f"a and b is {int(a and b)}")
    print(f"a or b is {int(a or b)}")
    print(f"not a is {int(not a)}")
```

This Python function `print_logic` takes two boolean arguments, `a` and `b`, and prints the results of "and", "or", and "not" operations on them. The `int()` function is used to convert the boolean values to integers (0 or 1) for printing purposes.
