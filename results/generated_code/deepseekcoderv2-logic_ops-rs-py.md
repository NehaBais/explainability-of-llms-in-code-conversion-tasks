 Here's the equivalent Python code for the given Rust function and main function:

```python
def boolean_ops(a: bool, b: bool):
    print(f"{a} and {b} -> {a and b}")
    print(f"{a} or {b} -> {a or b}")
    # In Python, there is no direct 'xor' operator for booleans. However, you can use the ^ operator for integers.
    # For boolean values, we can define xor as follows:
    def bool_xor(x, y):
        return x != y
    print(f"{a} xor {b} -> {bool_xor(a, b)}")
    print(f"not {a} -> {!a}")

# Test the function with different boolean values
boolean_ops(True, True)
boolean_ops(True, False)
boolean_ops(False, True)
boolean_ops(False, False)
```

Note: In Python, there is no direct `xor` operator for booleans. However, you can define a function to simulate the XOR operation if needed. Here, I've defined a helper function `bool_xor` to achieve this.
