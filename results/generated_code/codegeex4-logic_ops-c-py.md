In Python, the equivalent code would be:

```python
def print_logic(a: bool, b: bool):
    print(f"a and b is {a and b}")
    print(f"a or b is {a or b}")
    print(f"not a is not {not a}")

# To call the function with boolean arguments:
print_logic(True, False)
```
Please note that Python does not use `int` to represent booleans but instead uses `True` for 1 and `False` for 0. Also, in Python you can directly use logical operators (`and`, `or` and `not`) on boolean values without having to convert them from integers.
