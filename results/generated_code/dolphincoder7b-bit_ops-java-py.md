Sure, here's the equivalent Python code:

```python
def bitwise(a, b):
    print("a AND b: ", a & b)
    print("a OR b: ", a | b)
    print("a XOR b: ", a ^ b)
    print("NOT a: ", ~a)
    print("a  << b: ", a << b)  # left shift
    print("a  >> b: ", a >> b)  # arithmetic right shift
    print("a >>> b: ", a >> b)  # logical right shift
    print("a rol b: ", int.from_bytes(a.to_bytes(4, 'little')[-1:] + a.to_bytes(3, 'big')[0:-1], byteorder='big', signed=True))  #rotate left
    print("a ror b: ", int.from_bytes((a >> 24) & 255 | (a >> 8) & ((1 << 24) - 1), byteorder='big', signed=True))  #rotate right
```
I will note that this function assumes that `int` is a 32-bit number. If your `int`s can be larger than 32 bits, you'll need to adjust the left shift and rotate functions accordingly. You might also want to use `a << b if b > 0 else a >> (-b)` for the left shift operation to handle negative shifts correctly.
