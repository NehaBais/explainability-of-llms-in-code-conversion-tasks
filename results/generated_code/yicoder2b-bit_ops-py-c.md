Here is the equivalent C code for your Python script. The changes are listed below:

- The Python list and string representations are used in the place of bit manipulation in C.
- Function definitions in Python have a colon (:) at the end, while they don't exist in C.
- Division by 2^n is done using shifting right by n bits (>>), which is equivalent to integer division by 2**n.
- The logical AND operator '&' and the bitwise AND operation between two integers a and b are equivalent.
- Python's function argument passing is different from C. In C, arguments must be passed in the same order as they appear in the declaration of the function.
- The print statement in Python doesn't end with a semicolon.

```c
#include<stdio.h>

void bitwise_built_ins(int width, int a, int b){
    int mask = (1 << width) - 1;
    printf("    AND:     0b%o\n           & 0b%o\n           = 0b%o\n\n    OR:      0b%o\n           | 0b%o\n           = 0b%o\n\n    XOR:     0b%o\n           ^ 0b%o\n           = 0b%o\n\n    NOT:   ~ 0b%o\n           = 0b%o\n\n    SHIFTS\n                   0b%o >> 1\n                   = 0b%o\n                   
               0b%o << 1\n                 = 0b%o\n
",a & b, a & mask, (a & b) & mask, a | b, a & mask, (a | b) & mask, a ^ b, a & mask, ((a >> 1) ^ b) & mask, a << 1, a ^ b);
}

void helper_funcs(int width, int a){
    int mask = (1 << width) - 1;
    printf("               0b%o %%\n               = 0b%o\n\n               asr (%d, 0b%o, 1)\n                   = 0b%o\n\n               asr (%d, 0b%o, 2)\n                   = 0b%o\n\n               asr (%d, 0b%o, 4)\n                   = 0b%o\n", aa, (aa >> 1) ^ b, width, a, ((a >> 1) ^ b) & mask, width, a, ((a >> 2) ^ b) & mask, width, a, ((a >> 2) ^ b) & mask, width, a, ((a >> 3) ^ b) & mask);
}

int main(){
    bitwise_built_ins(8,27,125);
    helper_funcs(8,27);
    return 0;
}
```
This code will print the bitwise operations on 'a' and 'b'.
