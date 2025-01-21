The error occurs because `!` is not allowed inside f-string expressions to represent logical NOT operation, it's reserved for bitwise NOT operation which doesn't apply here.

Instead of using `!a`, we can use `not a` to perform the logical NOT operation correctly inside an f-string.
Corrected code:
```py
def boolean_ops(a: bool, b: bool) -> None:
    print(f"{a} and {b} -> {a and b}")
    print(f"{a} or {b} -> {a or b}")
    print(f"not {a} -> {not a}")

if __name__ == "__main__":
    boolean_ops(True, True)
    boolean_ops(True, False)
    boolean_ops(False, True)
    boolean_ops(False, False)
```
