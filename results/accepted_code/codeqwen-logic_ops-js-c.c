#include <stdio.h>

void logic(int A, int B) {
  printf("A AND b: %d\n", A && B);
  printf("A OR b: %d\n", A || B);
  printf("NOT a: %d\n", !A);
}

int main() {
  logic(1, 0); // replace 1 and 0 with your boolean values
  return 0;
}