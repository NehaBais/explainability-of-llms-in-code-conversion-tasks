#include <stdio.h>
#define BITWIDTH 32 // assuming a word size of 32 bits

void bitwise_builtins(int width, int a, int b) {
  unsigned int mask = (1 << width) - 1;
  printf("AND:     0b%.*x & 0b%.*x = 0b%.*x\n", width, a, width, b, width,
         (a & b) & mask);
  printf("OR:      0b%.*x | 0b%.*x = 0b%.*x\n", width, a, width, b, width,
         (a | b) & mask);
  printf("XOR:     0b%.*x ^ 0b%.*x = 0b%.*x\n", width, a, width, b, width,
         (a ^ b) & mask);
  printf("NOT:    ~0b%.*x          = 0b%.*x\n", width, a, width, ~a & mask);
}

int rotr(unsigned int width, unsigned int a, int n) {
  if (n < 0)
    return rotl(width, a, -n);
  else if (n == 0)
    return a;
  else {
    unsigned int mask = (1 << width) - 1;
    a = a & mask;
    n = n % width;
    return ((a >> n) | ((a & ((1 << n) - 1)) << (width - n))) & mask;
  }
}

int rotl(unsigned int width, unsigned int a, int n) {
  if (n < 0)
    return rotr(width, a, -n);
  else if (n == 0)
    return a;
  else {
    unsigned int mask = (1 << width) - 1;
    a = a & mask;
    n = n % width;
    return ((a << n) | (a >> (width - n))) & mask;
  }
}

int asr(unsigned int width, unsigned int a, int n) {
  if (n == 0)
    return a;
  else {
    unsigned int mask = (1 << width) - 1;
    return ((a >> n) | (-(a >> (width - 1)) << (width - n))) & mask;
  }
}

void helper_funcs(int width, unsigned int a) {
  printf("rotr(%d,0b%.*x,1) = 0b%.*x\n", width, width, a, width,
         rotr(width, a, 1));
  printf("rotl(%d,0b%.*x,2) = 0b%.*x\n", width, width, a, width,
         rotl(width, a, 2));
  printf("asr (%d,0b%.*x,3) = 0b%.*x\n", width, width, a, width,
         asr(width, a, 3));
}

int main() {
  bitwise_builtins(8, 27, 125);
  helper_funcs(8, 27);
  return 0;
}