 Sure, here's the equivalent Python code for the given C++ function:

```python
def print_logic(a, b):
    print("a and b is", a and b)
    print("a or b is", a or b)
    print("not a is", not a)

# Example usage:
print_logic(True, False)
```

This Python function `print_logic` takes two boolean arguments `a` and `b`, and prints the results of "and" (`a and b`), "or" (`a or b`), and "not" (`not a`) operations on these arguments. The `std::boolalpha` directive in C++ is not needed in Python, as booleans are automatically printed as `True` or `False`.
