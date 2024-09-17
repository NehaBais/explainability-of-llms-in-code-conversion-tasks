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