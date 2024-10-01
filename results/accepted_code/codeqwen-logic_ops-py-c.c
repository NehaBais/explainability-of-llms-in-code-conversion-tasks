#include <stdio.h>

void logic(int A, int B) {
  printf("A and B: %d\n", A && B);
  printf("A or B: %d\n", A || B);
  printf("Not A: %d\n", !A);
}

int main() {
  logic(1,
        0); // you can replace 1 and 0 with any integer values of your choice.
  return 0;
}