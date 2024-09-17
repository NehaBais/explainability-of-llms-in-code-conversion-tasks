Here is the Python equivalent of your Golang code:

```python
def bitwise(a, b):
    print("a:", bin(a & b))
    print("b:", bin(a | b)))
    print("xor:", bin(a ^ b)))
    print("not a:", bin(^a)))

    if b < 0:
        print("Right operand is negative, but all shifts require an unsigned right operand (shift distance)).")
        return

    ub = b & ((1 << 16) - 1))  # Make sure shift distance doesn't exceed 16 bits.

    print("shl a:", bin(a << ub)))
    print("shr a:", bin(a >> ub))))
    print("las a:", bin(a << ub | (a >> (16 - ub)) & ((1 << 16) - 1))))  # Arithmetic shift left and then right.
    print("ras a:", bin((a >> ub) + (a << (16 - ub)) & ((1 << 16) - 1))))  # Arithmetic shift right and then left.
    print("rol a:", bin(a << ub | (a >> (16 - ub)) & ((1 << 16) - 1))))  # Rotate left and then right.
    print("ror a:", bin((a >> ub) + (a << (16 - ub)) & ((1 << 16) - 1))))  # Rotate right and then left.

def main():
    a = -460
    b = 6
    bitwise(a, b)
```

Please note that the bitwise NOT operation on a 32-bit integer is not equivalent to a 64-bit integer in terms of precision and behavior. Therefore, the Python code provided above handles only 16 bits as per your Golang code. If you need to handle larger integers, you may need to modify the code accordingly.
