#include <stdio.h>

void logic(int A, int B) {
  printf("A AND B: %d\n", A && B);
  printf("A OR B: %d\n", A || B);
  printf("NOT A: %d\n", !A);
}

int main() {
  int A = 1; // true in C, false in Java
  int B = 0; // false in C, true in Java
  logic(A, B);
  return 0;
}