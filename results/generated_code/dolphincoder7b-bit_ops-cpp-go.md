The Go version of the code is as follows:
```
package main

import "fmt"

func bitwise(a int, b int) {
    fmt.Printf("a and b: %d\n", a&b)
    fmt.Printf("a or b: %d\n", a|b)
    fmt.Printf("a xor b: %d\n", a^b)
    fmt.Printf("not a: %d\n", ^a)

    // Note: The C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
    // is negative, or is greater or equal to the number of bits in the integer being shifted.
    fmt.Printf("a shl b: %d\n", a<<uint(b))
    fmt.Printf("a shr b: %d\n", a>>uint(b))

    // Typically arithmetic right shift, but not guaranteed.
    ua := uint32(a)
    fmt.Printf("a lsr b: %d\n", (ua>>uint(b))&0xffffffff)
    // logical right shift is the same as arithmetic right shift in Go.

    // There are no rotation operators in Go, but as of c++20 there is a standard-library rotate function.
    // The rotate function works for all rotation amounts, but the integer being rotated must always be an unsigned integer.
    fmt.Printf("a rol b: %d\n", (a << uint(b)) | (a >> (32 - uint(b))))
    fmt.Printf("a ror b: %d\n", ((a & 0x1f) << (32 - uint(b))) | (a >> uint(b)))
}
```
In Go, the `printf` function is used for output formatting. It's similar to `cout` in C++. The `uint()` type cast operator is used to convert the integer `b`, which is initially declared as an `int`, to a `uint32`. This conversion is necessary because bitwise operations are performed on unsigned integers in Go, and the shift count must be of an unsigned type.
The `0xffffffff` mask ensures that the result from left shifting `ua` by the number of bits (the shift amount) will fit into a 32-bit integer. This is necessary because the resulting value after applying the shift operator may not fit into the original variable's data type, which in this case is an unsigned integer with 32 bits.
The `fmt.Printf` function also includes formatting specifiers (`%d`) to format and print the result of the bitwise operations as decimal integers.
Note that Go doesn't have rotation operators like C/C++. However, the standard library provides a `rotate` function (`math/bits.RotateLeft32` or `math/bits.RotateRight32`) that can be used to simulate left and right rotations in Go. This is done by performing bitwise operations on the input integer `a`. The `<<` operator is used for left rotation, and the `>>` operator is used for right rotation.
The function `bitwise()` is called from the `main` function in the main package to execute the code.
