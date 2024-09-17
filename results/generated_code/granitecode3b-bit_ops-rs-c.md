Sure, here's the C code that performs the same operations as the Rust code:
```c
#include 
int main() {
 unsigned char a = 105;
 unsigned char b = 91;
 printf("a      = %08b n", a);
 printf("b      = %08b n", b);
 printf("a | b  = %08b n", a | b);
 printf("a & b  = %08b n", a & b);
 printf("a ^ b  = %08b n", a ^ b);
 printf("!a     = %08b n", !a);
 printf("a << 3 = %08b n", a << 3);
 printf("a >> 3 = %08b n", a >> 3);
}
```
Note that the C code uses `unsigned char` to represent integers, while the Rust code uses `u8`. Also, the C code includes some additional formatting options to make the output more readable.

