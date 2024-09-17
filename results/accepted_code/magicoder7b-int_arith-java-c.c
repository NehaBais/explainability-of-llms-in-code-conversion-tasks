#include <stdio.h>

int main() {
  // Get the 2 numbers from command line arguments
  int a, b;
  printf("Enter first number: ");
  scanf("%d", &a);

  printf("Enter second number: ");
  scanf("%d", &b);

  int sum = a + b;        // The result of adding 'a' and 'b'
  int difference = a - b; // The result of subtracting 'b' from 'a'
  int product = a * b;    // The result of multiplying 'a' and 'b'

  if (b != 0) {
    int quotient = a / b;  // The result of dividing 'a' by 'b'
    int remainder = a % b; // The remainder of dividing 'a' by 'b'

    printf("a + b = %d\n", sum);
    printf("a - b = %d\n", difference);
    printf("a * b = %d\n", product);
    printf("quotient of a / b = %.0f\n",
           (float)quotient); // truncates towards 0

    if ((a < 0 && b > 0) || (a > 0 && b < 0)) {
      printf("remainder of a / b = %d (has different sign to one operand)\n",
             remainder);
    } else {
      printf("remainder of a / b = %d\n",
             remainder); // same sign as first operand or none
    }
  } else {
    printf("Cannot divide by zero!\n");
  }

  return 0;
}