#include <stdint.h>
#include <stdio.h>

void printBinary(uint64_t number, int width) {
  for (int i = width - 1; i >= 0; --i) {
    printf("%llu", (number >> i) & 1U);
  }
}

uint64_t rotr(int width, uint64_t a, int n) {
  if (n < 0)
    return rotl(width, a, -n);
  else if (n == 0)
    return a;
  else {
    a &= (1ULL << width) - 1;
    return (a >> n) | (a << (width - n));
  }
}

uint64_t rotl(int width, uint64_t a, int n) {
  if (n < 0)
    return rotr(width, a, -n);
  else if (n == 0)
    return a;
  else {
    a &= (1ULL << width) - 1;
    return (a << n) | (a >> (width - n));
  }
}

uint64_t ashr(int width, uint64_t a, int n) {
  if (n < 0)
    return lshr(width, a, -n);
  else if (n == 0)
    return a;
  else {
    unsigned char sign = (a >> (width - 1)) & 1U;
    return ((a << (64 - width)) >> n) | (sign << (width - 1));
  }
}

uint64_t lshr(int width, uint64_t a, int n) {
  if (n < 0)
    return ashr(width, a, -n);
  else if (n == 0)
    return a;
  else {
    return a >> n;
  }
}