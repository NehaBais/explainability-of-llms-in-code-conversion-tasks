 In Python, the bitwise operations are performed using the "<<", ">>" and "^" operators. You can use the "~" operator for performing bitwise NOT operation. Here is the equivalent Python code:

```python
a = 105
b = 91
print("{:0>8b}".format(a))
print("{:0>8b}".format(b))
print("{:0>8b}".format(a | b))
print("{:0>8b}".format(a & b))
print("{:0>8b}".format(a ^ b))
print("{:0>8b}".format(~a & 0xFF)) # Bitwise NOT with mask to get a u8.
print("{:0>8b}".format(a << 3))
print("{:0>8b}".format(a >> 3))
```
The line "{:0>8b}".format(~a & 0xFF) performs bitwise NOT on a and masks the result with 0xFF to ensure we get an unsigned 8-bit integer. The rest of the lines perform bitwise operations as in Rust.
