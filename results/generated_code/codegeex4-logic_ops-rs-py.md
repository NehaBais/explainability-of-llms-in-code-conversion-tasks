```python
def boolean_ops(a: bool, b: bool) -> None:
    print(f"{a} and {b} -> {a and b}")
    print(f"{a} or {b} -> {a or b}")
    print(f"not {a} -> {!a}")

if __name__ == "__main__":
    boolean_ops(True, True)
    boolean_ops(True, False)
    boolean_ops(False, True)
    boolean_ops(False, False)
```
This Python code performs the same operations as your provided Rust code. It defines a function `boolean_ops` that takes two boolean arguments and prints the results of logical AND, OR, and NOT operations on them. The `main` block of the program calls this function with different combinations of boolean values.
