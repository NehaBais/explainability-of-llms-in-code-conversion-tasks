Here is the equivalent C code for the given Rust program. Please note that C does not have bitwise NOT and bitwise rotate operations inbuilt so we need to write custom functions for them:

```c
#include <stdio.h>
#include <limits.h>

// function to perform a bitwise NOT operation
unsigned char not_op(unsigned char val) {
    return ~val;
}

// function to perform a left rotate operation
unsigned char lrotate(unsigned char val, int shift) {
    if (shift < 0 || shift > CHAR_BIT * sizeof(val)) {
        return val;  // or some default value indicating error
    }
    return (val << shift) | (val >> ((sizeof(val) * CHAR_BIT) - shift));
}

// function to perform a right rotate operation
unsigned char rrotate(unsigned char val, int shift) {
    if (shift < 0 || shift > CHAR_BIT * sizeof(val)) {
        return val;  // or some default value indicating error
    }
    return (val >> shift) | (val << ((sizeof(val) * CHAR_BIT) - shift));
}

int main() {
    unsigned char a = 105, b = 91;

    printf("a      = %.8b\n", a);
    printf("b      = %.8b\n", b);
    printf("a | b  = %.8b\n", a | b);
    printf("a & b  = %.8b\n", a & b);
    printf("a ^ b  = %.8b\n", a ^ b);
    printf("!a     = %.8b\n", not_op(a));
    printf("a << 3 = %.8b\n", a << 3);
    printf("a >> 3 = %.8b\n", a >> 3);
    printf("lrotate(a)   = %.8b\n", lrotate(a, b));  // rotate left by b bits
    printf("rrotate(a)   = %.8b\n", rrotate(a, b));  // rotate right by b bits
}
```
Please note that the C code uses `%.8b` to print binary formatted integers, this is not a standard format specifier and will not be recognized in other environments. For a platform where you need to use binary formatting, you would have to write your own function or use some library's feature for the same purpose.
