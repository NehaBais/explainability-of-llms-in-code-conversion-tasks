Sure, here is the equivalent Python code for the given Rust program:

```python
def main():
    a: int = 105
    b: int = 91
    print(f"a      = {bin(a)}")
    print(f"b      = {bin(b)}")
    print(f"a | b  = {bin(a | b)}")
    print(f"a & b  = {bin(a & b)}")
    print(f"a ^ b  = {bin(a ^ b)}")
    print(f"~a     = {-a & ((1 << 8) - 1)}") # bitwise NOT
    print(f"a << 3 = {bin(a << 3)}")
    print(f"a >> 3 = {bin(a >> 3)}")
main()
```
Please replace the `int` type with the actual integer data types you are using. For example, in Python `int` is a default 'long' datatype for integers and it might be replaced by `int` if it supports larger numbers than what can be handled by `u8`.
