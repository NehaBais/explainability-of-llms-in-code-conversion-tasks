 Here's the equivalent Python code to perform the bitwise operations as described in your Rust code:

Note that in Python, the `!` operator performs a bitwise NOT on integers, but since integer representations are signed in Python, the result will be negative if the original number was positive. To get an unsigned representation, you can convert it to an unsigned format using the `unsigned_bits` function or similar:

```python
def main():
    a = 105
    b = 91
    print(f"a      = {bin(a)[2:].zfill(8)}")
    print(f"b      = {bin(b)[2:].zfill(8)}")
    print(f"a | b  = {bin(a | b)[2:].zfill(8)}")
    print(f"a & b  = {bin(a & b)[2:].zfill(8)}")
    print(f"a ^ b  = {bin(a ^ b)[2:].zfill(8)}")
    print(f"!a     = {bin(a & 0xFF) if a < 0 else bin(~a)[2:].zfill(8)}")
    print(f"a << 3 = {bin(a << 3)[2:].zfill(8)}")
    print(f"a >> 3 = {bin(a >> 3)[2:].zfill(8)}")

if __name__ == "__main__":
    main()
```

This will ensure that the bitwise NOT operation is performed on an 8-bit unsigned integer representation.
