Sure, here's the Python code that performs the same operations as the Rust code:
```
a = 105
b = 91
print("a      = ", bin(a)[2:].zfill(8))
print("b      = ", bin(b)[2:].zfill(8))
print("a | b  = ", bin(a|b)[2:].zfill(8))
print("a & b  = ", bin(a&b)[2:].zfill(8))
print("a ^ b  = ", bin(a^b)[2:].zfill(8))
print("!a     = ", bin(~a)[2:].zfill(8))
print("a << 3 = ", bin(a<<3)[2:].zfill(8))
print("a >> 3 = ", bin(a>>3)[2:].zfill(8))
```
This code converts the integers `a` and `b` to binary strings using the built-in `bin()` function, and then performs the operations on these strings. The `zfill()` method is used to pad the resulting strings with leading zeros to ensure they are all 8 characters long.

