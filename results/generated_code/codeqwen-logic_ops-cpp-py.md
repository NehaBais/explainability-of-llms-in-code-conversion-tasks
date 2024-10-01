Here's the Python equivalent of your C++ code:

```python
def print_logic(A, B):
    print("A and B is", A and B)
    print("A or B is", A or B)
    print("not A is", not A)
```

This Python function does the same thing as your C++ code: it takes two boolean values as input, performs a "and" operation on them, an "or" operation, and a "not" operation on the first argument. It then prints out these results. The `print()` function in Python is equivalent to `std::cout` in C++, and `boolalpha` ensures that boolean values are printed as "True" or "False", not as 1 or 0.
