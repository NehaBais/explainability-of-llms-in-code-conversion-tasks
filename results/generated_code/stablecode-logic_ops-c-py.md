Here's how you can convert the given C code to Python. 

In Python, there are no function argument types like int, bool etc. Instead, we receive inputs as function arguments and perform operations on them directly in the function body without needing separate print statements or printf-style function calls.

```python
def print_logic(a: bool, b: bool) -> None:
    print(f"a and b is {bool(a and b)}")
    print(f"a or b is {bool(a or b)}")
    print(f"not a is {bool(!a)}")
```

This Python function takes two boolean arguments `a` and `b`, performs the "and", "or", and "not" operations on these arguments, and then prints the results.
