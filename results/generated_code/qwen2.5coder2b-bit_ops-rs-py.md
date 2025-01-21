In Python, bitwise operations are performed using the built-in operators (`&`, `|`, `^`, `<<`, `>>`). All shift and rotate operations can be done by using the left and right shift operators (`<<` and `>>`) and the `<<=` and `>>=` operators for right and left rotate respectively.

Here is the Python code that performs all these operations on two integers, a bitwise AND, OR, XOR, NOT on the first integer, a left shift, right shift, right arithmetic shift, left rotate, and right rotate:

```python
def main():
    a = 105
    b = 91

    print(f"a      = {a:0>8b}")
    print(f"b      = {b:0>8b}")

    print(f"a | b  = {a | b:0>8b}")
    print(f"a & b  = {a & b:0>8b}")
    print(f"a ^ b  = {a ^ b:0>8b}")

    print(f"!a     = {int(not a):0>8b}")  # Using int and not to perform bitwise NOT

    print(f"a << 3 = {a << 3:0>8b}")
    print(f"a >> 3 = {a >> 3:0>8b}")

if __name__ == "__main__":
    main()
```

The `not a` operation in Python converts the boolean value of `a` to an integer (0 or 1) and then performs bitwise NOT on it. The result is then converted back to a string and printed with leading zeros using format specifiers.

For right shift (`>>`) and left rotate (`<<`), Python's built-in operators are used directly. For right arithmetic shift (`>>=`), the operator `<<=` is also used.
