Sure! Below is the Python equivalent of your C function:

```python
def print_logic(a, b):
    print(f"a and b is {a and b}")
    print(f"a or b is {a or b}")
    print(f"not a is {not a}")

# Example usage:
print_logic(True, False)
```

In this Python code:
- `a and b` evaluates to `True` if both `a` and `b` are `True`, otherwise it evaluates to `False`.
- `a or b` evaluates to `True` if at least one of `a` or `b` is `True`, otherwise it evaluates to `False`.
- `not a` inverts the boolean value of `a`.

You can call the `print_logic` function with `True` and `False` (or any other boolean values) to see the results.
