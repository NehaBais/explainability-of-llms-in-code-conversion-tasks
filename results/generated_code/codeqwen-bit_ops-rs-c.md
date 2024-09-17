The equivalent C code for the given Rust code is as follows:

```c
#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t A = 105;
    uint8_t b = 91;

    printf("A      = %08X\n", A);
    printf("b      = %08X\n", b);
    printf("A | b  = %08X\n", A | b);
    printf("A & b  = %08X\n", A & b);
    printf("A ^ b  = %08X\n", A ^ b);
    printf("!A     = %08X\n", ~A);
    printf("A << 3 = %08X\n", A << 3);
    printf("A >> 3 = %08X\n", A >> 3);

    return 0;
}
```
In C, bitwise operations are performed using the operator `&`, `|`, and `^`. The unary operator `~` performs a bitwise NOT operation. Left shift is done with the `<<` operator and right shift is done with the `>>` operator.

Additionally, in C, the type `uint8_t` is used to represent unsigned 8-bit integers. This is equivalent to Rust's `u8`. The format specifier `%08X` is used in printf to print the hexadecimal value of an integer with leading zeros up to eight places.
