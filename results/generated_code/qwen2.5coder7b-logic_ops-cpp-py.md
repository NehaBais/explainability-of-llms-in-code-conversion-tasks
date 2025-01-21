Here's how you can convert the given C++ code to Python:

```python
def print_logic(a, b):
    # Print a and b using logical AND
    print(f"a and b is {a and b}")
    
    # Print a or b using logical OR
    print(f"a or b is {a or b}")
    
    # Print not a using logical NOT
    print(f"not a is {not a}")

# Call the function with some test values
print_logic(True, False)
```

This Python code does the same thing as your C++ function. It defines a function `print_logic` that takes two boolean arguments `a` and `b`. Inside the function, it prints whether `a` and `b` are both true (`and`), if either `a` or `b` is true (`or`), and whether `a` is not true (`not`). The `print_logic(True, False)` at the end calls the function with `True` and `False` as arguments.
