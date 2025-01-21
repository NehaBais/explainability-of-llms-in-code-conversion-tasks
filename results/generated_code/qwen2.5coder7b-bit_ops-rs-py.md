Here is the Python equivalent of your Rust code:

```python
def print_binary(n):
    return format(n, '08b')

def left_rotate(n, shift):
    return (n << shift) | (n >> (8 - shift))

def right_rotate(n, shift):
    return (n >> shift) | (n << (8 - shift))

a = 105
b = 91

print(f"a      = {print_binary(a)}")
print(f"b      = {print_binary(b)}")
print(f"a | b  = {print_binary(a | b)}")
print(f"a & b  = {print_binary(a & b)}")
print(f"a ^ b  = {print_binary(a ^ b)}")
print(f"!a     = {print_binary(~a)}")
print(f"a << {b} = {print_binary(a << b)}")
print(f"a >> {b} = {print_binary(a >> b)}")

shift_amount = a & 3
print(f"a rotl {shift_amount} = {print_binary(left_rotate(a, shift_amount))}")
print(f"a rotr {shift_amount} = {print_binary(right_rotate(a, shift_amount))}")
```

Please note that bitwise rotation is not natively supported in Python, so I have implemented left and right rotate functions. Also, the `<<` operator performs a logical shift on Python, which is equivalent to an arithmetic shift when dealing with unsigned integers (like `u8`). If you need to perform an arithmetic shift, consider using the `>>=` operator instead.

Also, note that in Python, bitwise NOT operation gives different results compared to Rust due to the different sign handling. So, `!a` doesn't give same result as `!a` in Rust.
