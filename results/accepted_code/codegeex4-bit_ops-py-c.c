#include <stdint.h>
#include <stdio.h>

void printBinary(uint64_t number, int width) {
  for (int i = width - 1; i >= 0; --i) {
    printf("%llu", (number >> i) & 1U);
  }
}

uint64_t rotr(int width, uint64_t a, int n) {
  "Rotate a, n times to the right" if (n < 0) return rotl(width, a, -n);
  else if (n == 0) return a;
  else {
    a &= (1ULL << width) - 1;
    n %= width;

    uint64_t top = a >> (width - n);
    uint64_t bottom = a & ((1ULL << (width - n)) - 1);

    return top | (bottom << n);
  }
}

uint64_t rotl(int width, uint64_t a, int n) {
  "Rotate a, n times to the left" if (n < 0) return rotr(width, a, -n);
  else if (n == 0) return a;
  else {
    a &= (1ULL << width) - 1;
    n %= width;

    uint64_t bottom = a & ((1ULL << n) - 1);
    uint64_t top = a >> n;

    return bottom << (width - n) | top;
  }
}

uint64_t asr(int width, uint64_t a, int n) {
  "Arithmetic shift a, n times to the right. (sign preserving)." if (n <
                                                                     0) return a
      << -n;
  else if (n == 0) return a;
  else if (n >= width) return a & ((1ULL << (width - 1)) - 1)
      ? (1ULL << width) - 1
      : 0;
  else {
    uint64_t sign = (a >> (width - n));

    if (a & ((1ULL << (width - 1))))
      return a >> n | sign << (width - n);
    else
      return a >> n;
  }
}

void bitwise_built_ins(int width, uint64_t a, uint64_t b) {
  uint64_t mask = (1ULL << width) - 1;

  printf("AND:     ");
  printBinary(a, width);
  printf("\n");
  printf("        & ");
  printBinary(b, width);
  printf("\n");
  printf("        = ");
  printBinary((a & b) & mask, width);
  printf("\n\n");

  printf("OR:      ");
  printBinary(a, width);
  printf("\n");
  printf("        | ");
  printBinary(b, width);
  printf("\n");
  printf("        = ");
  printBinary((a | b) & mask, width);
  printf("\n\n");

  printf("NOT:     ");
  printBinary(a, width);
  printf("\n");
  printf("        ~ ");
  printBinary(b, width);
  printf("\n");
  printf("        = ");
  printBinary(~b & mask, width);
  printf("\n\n");

  // ... continue for other operations
}

void helper_funcs(int width, uint64_t a) {
  uint64_t aa = a | (1ULL << (width - 1));

  for (int i = 0; i < 8; ++i) {
    printf("ROTATE LEFT: ");
    printBinary(a, width);
    printf("\n");
    printf("              ");
    printBinary(aa, width);
    printf("\n");
    printf("        = ");
    printBinary(rotl(width, a, i), width);
    printf("\n\n");

    printf("ARITHMETIC SHIFT RIGHT: ");
    printBinary(a, width);
    printf("\n");
    printf("                        ");
    printBinary(aa, width);
    printf("\n");
    printf("        = ");
    printBinary(asr(width, a, i), width);
    printf("\n\n");
  }
}

int main() {
  bitwise_built_ins(8, 27, 125);
  helper_funcs(8, 27);

  return 0;
}