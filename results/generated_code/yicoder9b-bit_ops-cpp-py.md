Here is the Python equivalent of your C++ code. It makes use of the built-in functions bin(), int() and some slicing for the rotate operations.

```python
def bitwise(a, b):
    print('a and b:', a & b)  # Bitwise AND
    print('a or b: ', a | b)  # Bitwise OR
    print('a xor b:', a ^ b)  # Bitwise XOR
    print('not a:  ', ~a )   # Bitwise NOT

    # Note: the Python shift operators are not guaranteed to work if the shift count (that is, b) 
    # is negative, or is greater or equal to the number of bits in the integer being shifted.
    print('a shl b:', a << b)  # Left Shift
    print('a shr b:', a >> b)   # Arithmetic Right shift (signed right shift) 

    ua = a 
    print('a lsr b:', ua >> b) # Logical Right Shift

    # rotate left and right functions. Python does not have built-in rotate operators like C++.
    bin_a = bin(a)[2:].zfill(32)  # convert to binary (string) and remove '0b' prefix and fill in leading zeros 
    rol = int(bin_a[b:]+bin_a[:b], 2) # left rotate
    ror = int(bin_a[-b:]+bin_a[:-b], 2)  # right rotate
    print('a rol b:', rol)
    print('a ror b:', ror)
```

Please note that Python's shift operations and rotate operations do not work the same way as C++. If you have negative values or large shift/rotate amounts you should handle these edge cases separately.
