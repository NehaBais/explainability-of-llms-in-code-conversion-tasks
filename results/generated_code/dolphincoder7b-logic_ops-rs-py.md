The Rust code has been successfully converted to Python. Here's the equivalent in Python:
```python
def boolean_ops(a: bool, b: bool):
    print(f"{a} and {b} -> {a and b}")
    print(f"{a} or {b} -> {a or b}")
    print(f"{a} xor {b} -> {a ^ b}")
    print(f"not {a} -> {!a}")

def main():
    boolean_ops(True, True)
    boolean_ops(True, False)
    boolean_ops(False, True)
    boolean_ops(False, False)
```
Note that due to limitations in Python's type system, the function parameters are defined as `bool`, but Rust defines them as `boolean`. The Rust code also uses shorthand operator for "and" (`&&`), "or" (`||`), and exclusive or (`^`). The equivalents in Python are the regular operators `and`, `or`, and `^` respectively. Finally, the function `main()` is written as a separate function instead of a block of code, which could be more flexible and more readable in some use cases.
