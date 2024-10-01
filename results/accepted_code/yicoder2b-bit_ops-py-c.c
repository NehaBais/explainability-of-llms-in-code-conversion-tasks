#include <stdio.h>

void bitwise_built_ins(int width, int a, int b) {
  int mask = (1 << width) - 1;
    printf("    AND:     0b%o\n           & 0b%o\n           = 0b%o\n\n    OR:      0b%o\n           | 0b%o\n           = 0b%o\n\n    XOR:     0b%o\n           ^ 0b%o\n           = 0b%o\n\n    NOT:   ~ 0b%o\n           = 0b%o\n\n    SHIFTS\n                   0b%o >> 1\n                   = 0b%o\n                   
               0b%o << 1\n                 = 0b%o\n
",a & b, a & mask, (a & b) & mask, a | b, a & mask, (a | b) & mask, a ^ b, a & mask, ((a >> 1) ^ b) & mask, a << 1, a ^ b);
}

void helper_funcs(int width, int a) {
  int mask = (1 << width) - 1;
  printf("               0b%o %%\n               = 0b%o\n\n               asr "
         "(%d, 0b%o, 1)\n                   = 0b%o\n\n               asr (%d, "
         "0b%o, 2)\n                   = 0b%o\n\n               asr (%d, 0b%o, "
         "4)\n                   = 0b%o\n",
         aa, (aa >> 1) ^ b, width, a, ((a >> 1) ^ b) & mask, width, a,
         ((a >> 2) ^ b) & mask, width, a, ((a >> 2) ^ b) & mask, width, a,
         ((a >> 3) ^ b) & mask);
}

int main() {
  bitwise_built_ins(8, 27, 125);
  helper_funcs(8, 27);
  return 0;
}