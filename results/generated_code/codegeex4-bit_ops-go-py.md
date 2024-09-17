Here is the Python equivalent of your Golang code:

```python
def bitwise(a: int, b: int):
    print(f'a:   {a:016b}')
    print(f'b:   {b:016b}')

    # Bitwise logical operations
    print(f'and: {a&b:016b}')
    print(f'or:  {a|b:016b}')
    print(f'xor: {a^b:016b}')
    print(f'not: {~a:016b}')

    if b < 0:
        print("Right operand is negative, but all shifts require an unsigned right operand (shift distance).")
        return

    ua = a & 0xffff
    ub = b

    # Logical shifts (unsigned left operand)
    print(f'shl: {ua<<ub:016b}')
    print(f'shr: {ua>>ub:016b}')

    # Arithmetic shifts (signed left operand)
    print(f'las: {a<<ub:016b}')
    print(f'ras: {a>>ub:016b}')

    # Rotations
    print(f'rol: {(a<<ub)|(a>>(16-ub)&0xffff):016b}')
    print(f'ror: {(a>>ub)|(a<<(16-ub)&0xffff):016b}')


if __name__ == '__main__':
    a, b = -460, 6
    bitwise(a, b)
```

A few notes on the translation:

1. Python's `print` statement automatically adds newline at the end, so it's not necessary to add newline characters in format string as was done in Golang.
2. Python does not have a built-in bitwise NOT operator (`^` in Golang), so we use tilde (`~`) which performs bitwise NOT.
3. Python handles negative numbers for shift operations differently than Golang. To maintain similar behavior, we mask the first integer (`ua = a & 0xffff`) to simulate an unsigned left operand.
4. Rotation operations are implemented by performing two shifts and combining them with a bitwise OR operation. The `&0xffff` at the end of each rotation operation is used to truncate the result back down to 16 bits, similar to Python's behavior when shifting signed integers.
