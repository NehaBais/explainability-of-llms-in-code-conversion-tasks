#include <stdio.h>

int main() {
  int num1, num2;

  // Get two integers from the user
  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2);

  // Check the first integer is less than, equal to, or greater than the second
  // integer
  if (num1 < num2) {
    printf("%d is less than %d\n", num1, num2);
  } else if (num1 == num2) {
    printf("%d is equal to %d\n", num1, num2);
  } else {
    printf("%d is greater than %d\n", num1, num2);
  }

  return 0;
}