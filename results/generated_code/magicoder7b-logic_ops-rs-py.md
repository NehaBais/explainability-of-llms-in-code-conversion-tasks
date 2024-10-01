 Here is the equivalent Python code for your Rust function:

```python
def boolean_ops(a: bool, b: bool):
    print(f"{a} and {b} -> {a and b}")
    print(f"{a} or {b} -> {a or b}")
    print(f"{a} xor {b} -> {a != b}")  # equivalent of a ^ b in Rust
    print(f"not {a} -> {not a}")

boolean_ops(True, True)
boolean_ops(True, False)
boolean_ops(False, True)
boolean_ops(False, False)
```

Please note that Python uses the `^` operator for "exclusive or" operation while Rust's `^` is used for bitwise XOR. So for xor operation in python, I've used the "!=" operator which does similar job as xor (returns true if both operands are different).
