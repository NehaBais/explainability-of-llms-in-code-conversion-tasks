In Python, logical operations are performed using the standard keywords and they return Boolean values. Here's how you would write this in Python instead of C:

```python
def print_logic(a, b):
    print("a and b is", a and b)  # Equivalent to C code "printf('%d', a && b);"
    print("a or b is", a or b)   # Equivalent to C code "printf('%d', a || b);"
    print("not a is", not a)     # Equivalent to C code "printf('%d', !a);"
```

In Python, the `and` operation returns True if both of its operands are true. The `or` operation returns True if at least one of its operands is true and `not` negates a boolean value.  Please note that for numbers in C, non-zero values are treated as "true" while zero in the context of logical operations of Python is "false".

