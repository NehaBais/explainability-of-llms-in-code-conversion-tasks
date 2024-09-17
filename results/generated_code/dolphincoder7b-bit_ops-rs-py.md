I'm sorry for the confusion, but Rust does not support direct bit manipulation. The closest equivalent to bitwise AND, OR, and XOR in Python is using the "bitwise_and", "bitwise_or", and "bitwise_xor" functions provided by the operator module, respectively. 

Regarding shifts and rotates, these operations are typically done with integer values only and do not require a second operand. In Rust, these operations can be performed on integers using the appropriate shift or rotate operators: << (left shift), >>(right shift), and ^(bitwise XOR). However, in Python, you need to import the "operator" module to use these operators with integer values as well as for other mathematical functions.

Here's how you can rewrite your program in Python using the bitwise operators from the operator module:

```python
import operator

def main():
    a = 105
    b = 91
    print(f"a      = {bin(a)}")
    print(f"b      = {bin(b)}")
    shift_amount = b % (8 * 2) # Shift amount is the lower three bits of b
    print(f"Shift amount: {shift_amount}")
    print(f"a | b   = {bin(operator.bitwise_or(a, b))}")
    print(f"a & b   = {bin(operator.bitwise_and(a, b))}")
    print(f"a ^ b   = {bin(operator.bitwise_xor(a, b))}")
    print(f"!a      = {bin(~a)}")
    rotated_left  = a << shift_amount # Left rotate
    rotated_right = a >> (8 * 2 - shift_amount) # Right rotate
    print(f"rotated left:  {bin(rotated_left)}")
    print(f"rotated right: {bin(rotated_right)}")
```

Note that the bitwise rotate and arithmetic rotate operations can be emulated by shifting left or right by a multiple of 32 bits (the number of bits in an integer).
