```
if __name__ == '__main__':
    a = 105
    b = 91
    print("a      =", bin(a))
    print("b      =", bin(b))
    print("a | b  =", bin(a | b))
    print("a & b  =", bin(a & b))
    print("a ^ b  =", bin(a ^ b))
    print("!a     =", bin(~a))
    print("a << 3 =", bin(a << 3))
    print("a >> 3 =", bin(a >> 3))
```
This code uses the bitwise operators to perform operations on integers. The `bin` function is used to display the binary representation of the integers in a more readable format.

Here's how it works:

1. The first section defines two variables, `a` and `b`, as having type `u8`.
2. The next few lines print the values of `a` and `b` in binary format using the `bin` function.
3. The lines after that perform bitwise operations on `a` and `b`, such as OR, AND, XOR, NOT, left shift, right shift, and left rotate. The output of each operation is also displayed in binary format.
4. Finally, the code prints the result of a right arithmetic shift on `a` with a shift amount of 3.

Note that the bitwise operators in Python are prefixed with the tilde (`~`) character. For example, the bitwise NOT operator in Rust is written as `!a`, while in Python it's written as `~a`.
