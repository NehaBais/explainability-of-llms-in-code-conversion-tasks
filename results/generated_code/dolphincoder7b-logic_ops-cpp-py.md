Sure, here's the Python equivalent of your C++ function:

```python
def print_logic(a, b):
    # bools are truthy and falsy in Python, so we can use them directly
    print("a and b is", a and b)  # logical AND, same as (a and b)
    print("a or b is", a or b)  # logical OR, same as (a or b)
    print("not a is", not a)  # logical NOT, same as (!a)
```
In Python, `&&` and `||` are used for bitwise operations. If you want to use the actual boolean operators instead of those, you can do it like this:

def print_logic(a, b):
    print("a and b is", a & b)  # logical AND, same as (a & b)
    print("a or b is", a | b)  # logical OR, same as (a | b)
    print("not a is", not a)  # logical NOT, same as (!a)
