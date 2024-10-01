#include <stdio.h>  // for printf and scanf functions
#include <stdlib.h> // For exit macro and atoi function

int main() {
  int a, b;
  printf("Enter two integers:\n");

  if (scanf("%d %d", &a, &b) != 2) {
    printf("Invalid input\n");
    exit(-1);
  }

  int sum = a + b;
  int difference = a - b;
  int product = a * b;

  // quotient rounds towards zero in C (integer division). If a and/or b is
  // negative, the result might be unexpected.
  int quotient = a / b;

  // The sign of modulus operation's result matches to the first operand: 'a' if
  // they are different.
  int remainder = a % b;

  printf("a + b = %d\n", sum);
  printf("a - b = %d\n", difference);
  printf("a * b = %d\n", product);
  printf("a / b = %d\n", quotient);
  printf("a %% b = %d\n",
         remainder); // %% will print single % due to escape sequence
}