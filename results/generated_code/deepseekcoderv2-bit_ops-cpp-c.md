 To convert the given C++ code to C, we need to make several adjustments due to differences in syntax and library functions between the two languages. Here's the equivalent C code:

```c
#include <stdio.h>
#include <stdlib.h> // For std::rotl and std::rotr (if available)
#include <stdint.h> // For uintptr_t if needed for specific bit manipulation

void bitwise(int a, int b) {
    printf("a and b: %d\n", a & b);
    printf("a or b:  %d\n", a | b);
    printf("a xor b: %d\n", a ^ b);
    printf("not a:   %d\n", ~a);

    // Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
    // is negative, or is greater or equal to the number of bits in the integer being shifted.
    printf("a shl b: %d\n", a << b); // Note: "<<" is used both for output and for left shift
    printf("a shr b: %d\n", a >> b); // typically arithmetic right shift, but not guaranteed
    unsigned int ua = (unsigned int)a;
    printf("a lsr b: %u\n", ua >> b); // logical right shift (guaranteed)

    // There are no rotation operators in C, but you can implement them using shifts if needed.
    // Here is a simple implementation of left and right rotations using shifts:
    unsigned int rol(unsigned int value, int shift) {
        return (value << shift) | (value >> (32 - shift));
    }
    unsigned int ror(unsigned int value, int shift) {
        return (value >> shift) | (value << (32 - shift));
    }
    printf("a rol b: %u\n", rol(ua, b));
    printf("a ror b: %u\n", ror(ua, b));
}

int main() {
    int a = 0x12345678; // Example integer values
    int b = 3;          // Example shift/rotate amount
    bitwise(a, b);
    return 0;
}
```

### Explanation:
1. **Header Files**: In C, we use `#include <stdio.h>` for input and output functions instead of `<iostream>`. The standard library for rotation operations might need to be included differently depending on the environment or compiler support. Here, a simple implementation of left and right rotations using shifts is provided.
2. **Bitwise Operations**: All bitwise operations (`AND`, `OR`, `XOR`, `NOT`) are performed in C using the same operators as in C++.
3. **Shift Operations**: In C++, shift operations can be done directly on signed integers, but this might lead to undefined behavior if the shift count exceeds the number of bits. For safe shifts, cast the integer to an unsigned type before shifting.
4. **Rotation Operations**: Unlike C++, C does not have built-in rotation operators. You can implement them using shifts as shown in the code snippet. This implementation assumes a 32-bit integer for simplicity, but you might need to adjust it based on your specific requirements and environment.
5. **Output**: Use `printf` instead of `std::cout` for output operations. The format specifier is `%d` for integers and `%u` for unsigned integers.
