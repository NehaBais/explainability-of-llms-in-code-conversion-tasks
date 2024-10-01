Here is the Python equivalent of your Rust code:

```python
def boolean_ops(a: bool, b: bool) -> None:
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
In Python, boolean operations (`and`, `or`, `xor`) and the `not` operator work similarly to those in Rust. So, your requirement can be easily fulfilled by rewriting your function in Python as shown above.
