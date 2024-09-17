#include <stdio.h>

void bitwise(int A, int B) {
  printf("A AND B: %d\n", (A & B));
  printf("A OR B: %d\n", (A | B));
  printf("A XOR B: %d\n", (A ^ B));
  printf("NOT A: %d\n", ~A);
  printf("A << B: %d\n", (A << B));  // left shift
  printf("A >> B: %d\n", (A >> B));  // arithmetic right shift
  printf("A >>> B: %d\n", (A >> B)); // logical right shift
}

int main() {
  int A = 8;
  int B = 3;
  bitwise(A, B);
  return 0;
}