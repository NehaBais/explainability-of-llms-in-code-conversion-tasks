#include <stdio.h>

int main() {
  int a, b;

  // Get two integers from the user
  printf("Enter the first integer: ");
  scanf("%d", &a);
  printf("Enter the second integer: ");
  scanf("%d", &b);

  // Display a message based on the comparison of the two integers
  if (a < b) {
    printf("%d is less than %d\n", a, b);
  } else if (a == b) {
    printf("%d equals %d\n", a, b);
  } else if (a > b) {
    printf("%d is greater than %d\n", a, b);
  }

  return 0;
}