In Python, we use the "and", "or", and "not" operators to perform logical operations on Boolean values. Here's the equivalent Python code for your logic function:
```python
def logic(a, b):
    print("a AND b: ", a and b)
    print("a OR b: ", a or b)
    print("NOT a: ", not a)
```
Note that we don't need the `System.out.println` statement in Python because it's automatically handled by the print function. We also use the `and`, `or`, and `not` operators instead of the corresponding boolean operations (`&&`, `||`, and `!`). This is similar to the Java code, but not exactly the same since the logical operators return Boolean values in Python, while the corresponding boolean operations return primitive values (0 for false and 1 for true).

def logic(a, b):
    print("a AND b: ", a and b)  # Output: True if both a and b are True; otherwise False
    print("a OR b: ", a or b)  # Output: True if at least one of a and b is True; otherwise False
    print("NOT a: ", not a)  # Output: False if a is True; otherwise True

