This problem requires understanding of bitwise operations in both Rust and C. For the C version, we will use types `unsigned char` which is equivalent to `u8` in Rust. Here's how you can achieve these operations:

In C version:

```C
#include <stdio.h>

int main() {
    unsigned char a = 105;
    unsigned char b = 91;
    printf("a      = %u\n", a);
    printf("b      = %u\n", b);
    printf("a | b  = %u\n", a | b);
    printf("a & b  = %u\n", a & b);
    printf("a ^ b  = %u\n", a ^ b);
    printf("!a     = %u\n", ~a);
    printf("a << 3 = %u\n", a << 3);
    printf("a >> 3 = %u\n", a >> 3);
}
```
Please note that the printf function used in C is different from the Rust's `println!` macro. In Rust, we use `{:b}` for binary representation of a number and in C, we use the format specifier '%u' to represent unsigned integers.
