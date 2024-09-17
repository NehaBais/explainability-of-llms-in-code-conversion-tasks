Here is the converted code from Golang to C:
```c
#include 
#include 
void bitwise(int16_t a, int16_t b) {
 printf("a:   %016b
", (uint16_t)a);
 printf("b:   %016b
", (uint16_t)b);
 // Bitwise logical operations
 printf("and: %016b
", (uint16_t)(a & b));
 printf("or:  %016b
", (uint16_t)(a | b));
 printf("xor: %016b
", (uint16_t)(a ^ b));
 printf("not: %016b
", (uint16_t)(~a));
 if (b < 0) {
 printf("Right operand is negative, but all shifts require an unsigned right operand (shift distance).
");
 return;
 }
 uint16_t ua = (uint16_t)a;
 uint32_t ub = (uint32_t)b;
 // Logical shifts (unsigned left operand)
 printf("shl: %016b
", (uint16_t)(ua << ub));
 printf("shr: %016b
", (uint16_t)(ua >> ub));
 // Arithmetic shifts (signed left operand)
 printf("las: %016b
", (uint16_t)(a << ub));
 printf("ras: %016b
", (uint16_t)(a >> ub));
 // Rotations
 uint32_t mask = (1 << (ub & 0x1f)) - 1;
 printf("rol: %016b
", (uint16_t)((ua << ub) & ~mask) | (uint16_t)(a >> (16 - ub)));
 printf("ror: %016b
", (uint16_t)((a >> ub) & ~mask) | (uint16_t)(ua << (16 - ub)));
}
int main() {
 int16_t a = -460, b = 6;
 bitwise(a, b);
 return 0;
}
```
Note that the code has been modified to use `uint16_t` and `uint32_t` for better portability. Additionally, the mask calculation for the rotation operations has been simplified using bit shifting.

