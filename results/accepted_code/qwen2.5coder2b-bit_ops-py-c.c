#include <stdio.h>

void bitwise_built_ins(unsigned int width, unsigned int a, unsigned int b) {
  unsigned int mask = (1 << width) - 1;
  printf("AND:     0b%u \n", a & b);
  printf("OR:      0b%u \n", a | b);
  printf("XOR:     0b%u \n", a ^ b);
  printf("NOT:   ~ 0b%u \n", (~a) & mask);

  unsigned int right_shift = (a >> 1) & mask;
  printf("RIGHT: %u \n", right_shift);

  unsigned int left_shift = (a << 1) & mask;
  printf("LEFT: %u \n", left_shift);

  unsigned int arithetic_right_shift = asr(width, a, 1);
  printf("ASR: %u \n", arithetic_right_shift);
}

unsigned int rotr(unsigned int width, unsigned int a, unsigned int n) {
  if (n < 0) {
    return rotr(width, a, -n);
  } else if (n == 0) {
    return a;
  } else {
    unsigned int mask = (1 << width) - 1;
    unsigned int top_bit_mask = 1 << (width - 1);
    a &= mask;
    n %= width;
    return ((a >> n) | ((a & ((1 << n) - 1)) << (width - n)));
  }
}

unsigned int rotl(unsigned int width, unsigned int a, unsigned int n) {
  if (n < 0) {
    return rotr(width, a, -n);
  } else if (n == 0) {
    return a;
  } else {
    unsigned int mask = (1 << width) - 1;
    a &= mask;
    n %= width;
    return ((a << n) & mask | (a >> (width - n)));
  }
}

unsigned int asr(unsigned int width, unsigned int a, unsigned int n) {
  if (n < 0) {
    return (a << -n) & mask;
  } else if (n == 0) {
    return a;
  } else if (n >= width) {
    return mask if a & top_bit_mask else 0;
  } else {
    unsigned int mask = (1 << width) - 1;
    unsigned int top_bit_mask = 1 << (width - 1);
    a &= mask;
    if (a & top_bit_mask) {
      unsigned int signs = (1 << n) - 1;
      return ((a >> n) | ((a & ((1 << n) - 1)) << (width - n)));
    } else {
      return (a >> n);
    }
  }
}

int main() {
  bitwise_built_ins(8, 27, 125);
  helper_funcs(8, 27);

  return 0;
}