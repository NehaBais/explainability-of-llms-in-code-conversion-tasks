In Python, you can use the built-in logical operators and operations to create the same functionality as in Rust. Below is the equivalent code in Python:

```python
def boolean_ops(a: bool, b: bool):
    print(f"{a} and {b} -> {a and b}")
    print(f"{a} or {b} -> {a or b}")
    print(f"{a} xor {b} -> {a ^ b}")
    print(f"not {a} -> {not a}")

if __name__ == "__main__":
    boolean_ops(True, True)
    boolean_ops(True, False)
    boolean_ops(False, True)
    boolean_ops(False, False)
```

This function `boolean_ops` takes two arguments and prints the results of "and", "or", "xor", and "not" operations on both arguments. When you run this Python code, it will produce the same output as your Rust code:


True and True -> True
True or True -> True
False or True -> True
False and False -> False
True xor True -> False
True xor False -> True
False xor True -> True
False xor False -> False

