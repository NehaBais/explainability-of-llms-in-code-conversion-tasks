The equivalent Python code for the above Golang function is:

```python
def bitwise(a, b):
    # Bitwise logical operations in python uses '&' for AND operation, '|' for OR operation and '^' for XOR operation
    print(f"a:   {a:016b}")
    print(f"b:   {b:016b}")

    # Bitwise not operator is denoted by '~'
    print(f"not: {~a:016b}")

    if b < 0:
        print("Right operand is negative, but all shifts require an unsigned right operand (shift distance).")
        return

    # Logical shifts
    print(f"shl: {int(a << b):016b}")
    print(f"shr: {int(a >> b):016b}")

    # Arithmetic shifts
    print(f"las: {int(int(a) * (-2)**(32-b)) if b >= 0 else int(a & 0xFFFFFFFF)}")
    print(f"ras: {int(int(a) / (2 ** (32 - b))) if b >= 0 else int(a & 0xFFFFFFFF)}")

    # Rotations
    print(f"rol: {int(a << b) | (a >> (32-b))}")
    print(f"ror: {int((a >> b) + a * (-2)**(32-b))) if b >= 0 else int((a & 0xFFFFFFFF) + (a * (-2)**(32 - b)))")

if __name__ == "__main__":
    a = -460
    b = 6
    bitwise(a, b)
```
This Python function uses bitwise operators for performing the specified operations. The `int()` function is used to convert the result of each operation from a float type to an integer. For right shifts and right arithmetic shifts, if the shift distance is negative, it performs signed shift; otherwise, it performs unsigned shift.
