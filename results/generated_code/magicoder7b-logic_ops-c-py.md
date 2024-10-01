 Here's how you can write the same function in Python:

```python
def print_logic(a, b):
    # Python uses "and" and "or" instead of "&&" and "||". 
    # Also note that Python uses "not" for logical negation.
    print("a and b is", a and b)
    print("a or b is", a or b)
    print("not a is", not a)

print_logic(True, False)
```
