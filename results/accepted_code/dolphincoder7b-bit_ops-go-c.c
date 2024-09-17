#include <stdint.h>
#include <stdio.h>

void and_op(int16_t a, int16_t b) {
  printf("a:    %016b\n", (uint16_t)a);
  printf("b:    %016b\n", (uint16_t)b);

  // Bitwise logical operations
  printf("and:  %016b\n", (uint16_t)(a & b));
}

void or_op(int16_t a, int16_t b) {
  printf("a:    %016b\n", (uint16_t)a);
  printf("b:    %016b\n", (uint16_t)b);

  // Bitwise logical operations
  printf("or:   %016b\n", (uint16_t)(a | b));
}

void xor_op(int16_t a, int16_t b) {
  printf("a:    %016b\n", (uint16_t)a);
  printf("b:    %016b\n", (uint16_t)b);

  // Bitwise logical operations
  printf("xor:  %016b\n", (uint16_t)(a ^ b));
}

void not_op(int16_t a, int16_t b) {
  printf("a:    %016b\n", (uint16_t)a);

  // Bitwise logical operations
  printf("not:  %016b\n", (uint16_t)(~a));
}

void left_shift(int16_t a, int16_t b) {
  uint16_t ua = a;
  uint32_t ub = b;

  printf("a:    %016b\n", (uint16_t)a);
  printf("b:    %016b\n", (uint16_t)b);

  // Logical shifts  (unsigned left operand)
  printf("shl:  %016b\n", (uint16_t)(ua << ub));
}

void right_shift(int16_t a, int16_t b) {
  uint16_t ua = a;
  uint32_t ub = b;

  printf("a:    %016b\n", (uint16_t)a);
  printf("b:    %016b\n", (uint16_t)b);

  // Arithmetic shifts  (signed left operand)
  printf("las:  %016b\n", (int16_t)(ua << ub));
}

void right_arith_shift(int16_t a, int16_t b) {
  uint32_t ua = a;
  uint32_t ub = b;

  printf("a:    %016b\n", (uint16_t)a);
  printf("b:    %016b\n", (uint16_t)b);

  // Arithmetic shifts  (signed left operand)
  printf("ras:  %016b\n", (int32_t)(ua >> ub));
}

void rotate_left(int16_t a, int16_t b) {
  uint32_t ua = a;
  uint32_t ub = b;

  printf("a:    %016b\n", (uint16_t)a);
  printf("b:    %016b\n", (uint16_t)b);

  // Rotations
    printf("rol:  %016b\n", (int32_t)((ua << ub) | ((int32_t)(ua >> (32 - ub))));
}

void rotate_right(int16_t a, int16_t b) {
  uint32_t ua = a;
  uint32_t ub = b;

  printf("a:    %016b\n", (uint16_t)a);
  printf("b:    %016b\n", (uint16_t)b);

  // Rotations
  printf("ror:  %016b\n", (int32_t)((int32_t)(ua >> ub) | (ua << (32 - ub))));
}

void bitwise(int16_t a, int16_t b) {
  and_op(a, b);
  or_op(a, b);
  xor_op(a, b);

  not_op(a, 0);

  if (b < 0) {
    printf("Right operand is negative, but all shifts require an unsigned "
           "right operand (shift distance).\n");
    return;
  }

  uint16_t ua = a;
  uint32_t ub = b;

  left_shift(a, b);
  right_shift(a, b);
  right_arith_shift(a, b);

  rotate_left(a, b);
  rotate_right(a, b);
}

int main() {
  int16_t a = -460;
  int16_t b = 6;
  bitwise(a, b);

  return 0;
}