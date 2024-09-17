Here is the converted code from Rust to C:
```
#include 
int main() {
 uint8_t a = 105;
 uint8_t b = 91;
 printf("a      = %08b
", a);
 printf("b      = %08b
", b);
 printf("a | b  = %08b
", a | b);
 printf("a & b  = %08b
", a & b);
 printf("a ^ b  = %08b
", a ^ b);
 printf("!a     = %08b
", ~a);
 printf("a << 3 = %08b
", a << 3);
 printf("a >> 3 = %08b
", a >> 3);
 return 0;
}
``` 
Note that in C, the bitwise NOT operator is represented by the tilde (~) symbol. Also, the shift and rotate operations are performed using the left shift (<<), right shift (>>), and right arithmetic shift (>>) operators, respectively. The amount of shift/rotate is specified by the second integer.

