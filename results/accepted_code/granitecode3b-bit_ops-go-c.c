#include
int main() {
  int16_t a = -460;
  int16_t b = 6;

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
 
 if(b < 0) {
    printf("Right operand is negative, but all shifts require an unsigned "
           "right operand (shift distance).n");
    return;
 }
 uint16_t ua = a;
 uint32_t ub = b;
 
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
 printf("rol: %016b
", (uint16_t)((ua << ub) | (ua >> (16 - ub))));
 printf("ror: %016b
", (uint16_t)((a << ub) | (a >> (16 - ub))));
 
 return 0;
}