#include <stdio.h>

void bitwise_built_ins(int width, int a, int b) {
  int mask = (1 << width) - 1;
  printf("    AND:\t\t0b%d & 0b%d = 0b%d\n", a, b, a & b);
  printf("    OR:\t\t0b%d | 0b%d = 0b%d\n", a, b, a | b);
  printf("    XOR:\t\t0b%d ^ 0b%d = 0b%d\n", a, b, a ^ b);
  printf("    NOT:\t\t~0b%d = 0b%d\n", a, ~a);
}

void rotr(int width, int a, int n) {
  if (n < 0) {
    return rotl(width, a, -n);
  } else if (n == 0) {
    return a;
  } else {
    int mask = (1 << width) - 1;
    a &= mask;
    return ((a >> n) | ((a & ((1 << n) - 1)) << (width - n)));
  }
}

void rotl(int width, int a, int n) {
  if (n < 0) {
    return rotr(width, a, -n);
  } else if (n == 0) {
    return a;
  } else {
    int mask = (1 << width) - 1;
    a &= mask;
    return ((a << n) | (a >> (width - n)));
  }
}

void asr(int width, int a, int n) {
  if (n < 0) {
    return rotl(width, a, -n);
  } else if (n == 0) {
    return a;
  } else {
    int mask = (1 << width) - 1;
    a &= mask;
    return ((a >> n) | (((int64_t)a) << (width - n)));
  }
}

void helper_funcs(int width, int a) {
  printf("    SIGN-EXTENDING ARITHMETIC SHIFT RIGHT:\n");
  printf("                   asr(%d, 0b%d, 1) = 0b%d\n", width, a,
         asr(width, a, 1));
  printf("                   asr(%d, 0b%d, 2) = 0b%d\n", width, a,
         asr(width, a, 2));
  printf("                   asr(%d, 0b%d, 4) = 0b%d\n", width, a,
         asr(width, a, 4));
}

int main() {
  bitwise_built_ins(8, 27, 125);
  helper_funcs(8, 27);
  return 0;
}