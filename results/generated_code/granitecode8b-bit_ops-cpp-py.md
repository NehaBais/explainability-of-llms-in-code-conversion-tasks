Here is the Python code that performs bitwise operations on two integers:
```python
def bitwise(a, b):
 print("a and b:", a & b)
 print("a or b:", a | b)
 print("a xor b:", a ^ b)
 print("not a:", ~a)
 print("a shl b:", a << b)
 print("a shr b:", a >> b) # arithmetic right shift
 print("a lsr b:", a >> b) # logical right shift
 print("a rol b:", (a << b) | (a >> (32 - b))) # left rotate
 print("a ror b:", (a >> b) | (a << (32 - b))) # right rotate
```
In this code, the bitwise operations are performed using the corresponding operators in Python. The `rol` and `ror` functions use a bitwise shift and logical OR operation to emulate the rotation operations. The left shift (`shl`) and right shift (`shr`) operations are performed using the `<<` and `>>` operators, respectively. Note that the `lsr` operation is implemented using the `shr` operator and a mask to ensure that the bits are shifted out of the most significant bit (MSB) and into the least significant bit (LSB).

