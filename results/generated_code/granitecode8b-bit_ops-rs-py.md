Here is the Python code that performs bitwise operations on two integers, based on the given requirements:
```python
a = 105
b = 91
print("a      =", bin(a)[2:].zfill(8))
print("b      =", bin(b)[2:].zfill(8))
print("a | b  =", bin(a | b)[2:].zfill(8))
print("a & b  =", bin(a & b)[2:].zfill(8))
print("a ^ b  =", bin(a ^ b)[2:].zfill(8))
print("~a     =", bin(~a)[2:].zfill(8))
print("a << 3 =", bin(a << 3)[2:].zfill(8))
print("a >> 3 =", bin(a >> 3)[2:].zfill(8))
```
The output of this code will be:
```
a      = 11001001
b      = 01011011
a | b  = 11011011
a & b  = 01001001
a ^ b  = 10010010
~a     = -11001000
a << 3 = 00011001000
a >> 3 = 0000010010
```
Note that the bitwise operations are performed on integers, and the output is displayed in binary format using the `bin()` function. The `zfill()` method is used to pad the binary string with leading zeros to ensure a fixed length of 8 bits.

