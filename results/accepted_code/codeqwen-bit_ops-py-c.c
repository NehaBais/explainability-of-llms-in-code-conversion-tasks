#include <stdio.h>

void bitwise_built_ins(int width, int A, int b) {
  int mask = (1 << width) - 1;
  printf("    AND:     0b%0*x\n", width, A);
  printf("        & 0b%0*x\n", width, b);
  printf("        = 0b%0*x\n", width, (A & b) & mask);
  printf("\n");
  printf("    OR:      0b%0*x\n", width, A);
  printf("        | 0b%0*x\n", width, b);
  printf("        = 0b%0*x\n", width, (A | b) & mask);
  printf("\n");
  printf("    XOR:     0b%0*x\n", width, A);
  printf("        ^ 0b%0*x\n", width, b);
  printf("        = 0b%0*x\n", width, (A ^ b) & mask);
  printf("\n");
  printf("    NOT:    ~0b%0*x\n", width, A);
  printf("        = 0b%0*x\n", width, (~A) & mask);
  printf("\n");
  printf("SHIFTS:\n");
  printf("    LEFT:      0b%0*x\n", width, A << 1);
  printf("        << %d\n", 1);
  printf("        = 0b%0*x\n", width, (A << 1) & mask);
  printf("\n");
  printf("    RIGHT:     0b%0*x\n", width, A >> 1);
  printf("        >> %d\n", 1);
  printf("        = 0b%0*x\n", width, (A >> 1) & mask);
  printf("\n");
}

void helper_funcs(int width, int A) {
  int aa = A | (1 << (width - 1)); // Sign-extend A to make sure the next shift
                                   // operation preserves the sign bit.

  printf("ROTATIONS:\n");
  for (int i = 0; i < width * 4; ++i) {
    printf("    LEFT:      0b%0*x\n", width, A << i);
    printf("        << %d\n", i);
    printf("        = 0b%0*x\n", width, (A << i) & mask);
    printf("\n");
  }

  for (int i = 0; i < width * 4; ++i) {
    printf("    RIGHT:     0b%0*x\n", width, A >> i);
    printf("        >> %d\n", i);
    printf("        = 0b%0*x\n", width, (A >> i) & mask);
    printf("\n");
  }

  printf("SIGN-EXTENDING ARITHMETIC SHIFT RIGHT:\n");
  for (int i = 0; i < width * 4; ++i) {
    printf("        0b%0*x\n", width, ((A << width - i) >> width - 1));
    printf("\n");
  }

  for (int i = 0; i < width * 4; ++i) {
    printf("        0b%0*x\n", width, ((Aa << width - i) >> width - 1));
    printf("\n");
  }
}

int main() {
  bitwise_built_ins(8, 27, 125);
  helper_funcs(8, 27);
  return 0;
}