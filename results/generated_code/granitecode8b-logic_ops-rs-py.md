Here's the equivalent Python code for the given Rust function:
```python
def boolean_ops(a: bool, b: bool):
 print(f"{a} and {b} -> {a and b}")
 print(f"{a} or {b} -> {a or b}")
 print(f"{a} xor {b} -> {a ^ b}")
 print(f"not {a} -> {not a}")
boolean_ops(True, True)
boolean_ops(True, False)
boolean_ops(False, True)
boolean_ops(False, False)
```
This Python function takes two logical (boolean) values as arguments and outputs the result of "and", "or", "xor" and "not" on both arguments. The "and", "or" and "xor" operations are performed using the corresponding operators in Python. The "not" operation is performed by placing an exclamation mark before the value. The function is then called with different boolean values to demonstrate its functionality.

