Here's the Python equivalent of your C++ code:
```python
try:
    A, b = map(int, input("Enter two numbers separated by space: ").split())

    # test for less-than
    if A < b:
        print(f"{A} Is less than {b}")

    # test for equality
    elif A == b:
        print(f"{A} Is equal to {b}")

    # test for greater-than
    else:
        print(f"{A} Is greater than {b}")
except ValueError:
    print("Could not read the numbers")
```
In this Python code, we use `map()` function along with `split()` to get two integers from the user. We split the input by space and convert each part into an integer using `map()`. The `try-except` block is used for exception handling, in case user enters non-integer inputs.
