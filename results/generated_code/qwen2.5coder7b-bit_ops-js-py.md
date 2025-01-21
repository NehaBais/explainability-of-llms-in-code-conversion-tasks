Here is how you can convert the JavaScript code to Python:

```python
def bitwise(a, b):
    print(f"a AND b: {a & b}")
    print(f"a OR b: {a | b}")
    print(f"a XOR b: {a ^ b}")
    print(f"NOT a: {~a}")
    print(f"a << b: {a << b}") # left shift
    print(f"a >> b: {a >> b}") # arithmetic right shift
    print(f"a >>> b: {a >> b}") # logical right shift

bitwise(5, 2)
```

This Python code performs the same operations as your JavaScript code. The `print` statements are used instead of `alert` to output the results in a console, and there is no need for any libraries to be imported as these bitwise operations are built-in Python functions.
