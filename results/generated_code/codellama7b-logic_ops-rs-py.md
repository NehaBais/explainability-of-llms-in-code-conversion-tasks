Here is the Python code that should accomplish the same task as the Rust code:
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
Explanation:

The `print` function is used to output the results of each operation. The `f` prefix before the string allows for using placeholders that can be filled in with values. In this case, we use `{a}`, `{b}`, and `{a and b}` to represent the first two arguments and the result of the `and` operation.

The `if __name__ == "__main__":` line is a guard statement that ensures that the code inside it only runs when the file is executed as the main script, rather than when it is imported as a module by another file.

Note: The `^` operator in Python is not the same as the `xor` operation in Rust. In Python, it performs a bitwise exclusive or operation, which is equivalent to the `xor` function in Rust. To perform the `xor` operation in Python, you can use the `operator` module and its `xor` function:

from operator import xor

print(f"{a} xor {b} -> {xor(a, b)}")

