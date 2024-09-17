#include <stdio.h>
#define WIDTH 8

unsigned int mask = (1 << WIDTH) - 1;

void printBin(int num) {
  for (int i = WIDTH - 1; i >= 0; --i) {
    printf("%d", (num & (1 << i)) ? 1 : 0);
  }
}

unsigned int not_operator(unsigned int a) { return ~a & mask; }

unsigned int and_operator(unsigned int a, unsigned int b) { return a & b; }

unsigned int or_operator(unsigned int a, unsigned int b) { return a | b; }

unsigned int xor_operator(unsigned int a, unsigned int b) { return a ^ b; }

unsigned int rotr(unsigned int width, unsigned int a, int n) {
  if (n < 0)
    return rotl(width, a, -n);
  else if (n == 0)
    return a;
  else {
    a = a & mask;
    return ((a >> n) | ((a << (width - n)) & mask));
  }
}

unsigned int rotl(unsigned int width, unsigned int a, int n) {
  if (n < 0)
    return rotr(width, a, -n);
  else if (n == 0)
    return a;
  else {
    a = a & mask;
    return ((a << n) | (a >> (width - n)));
  }
}

unsigned int asr(unsigned int width, unsigned int a, int n) {
  if (n < 0)
    return a << -n;
  else if (n == 0)
    return a;
  else {
    a = a & mask;
        return ((a >> n) | (((a & (1<<(width-1))) ? (1 << (width-n)) : 0));
  }
}

int main() {
  unsigned int a = 27, b = 125;

  printf("AND:\n");
  printBin(and_operator(a & mask, b & mask));

  printf("\nOR:\n");
  printBin(or_operator(a & mask, b & mask));

  printf("\nXOR:\n");
  printBin(xor_operator(a & mask, b & mask));

  printf("\nNOT:\n");
  printBin(not_operator(a & mask));

  printf("\nRight Shifts:\n");
  for (int i = 1; i <= 4; ++i)
    printf("%d:\n", i);
  printBin(rotr(WIDTH, a & mask, i));

  printf("\nLeft Shifts:\n");
  for (int i = 1; i <= 4; ++i) {
    printf("%d:\n", i);
    printBin(rotl(WIDTH, a & mask, i));
  }

  printf("\nASR:\n");
  for (int i = 1; i <= 4; ++i) {
    printf("%d:\n", i);
    printBin(asr(WIDTH, a & mask, i));
  }
}