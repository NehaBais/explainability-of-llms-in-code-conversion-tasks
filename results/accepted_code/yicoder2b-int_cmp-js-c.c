#include <stdio.h>
int main() {
  // Variables declaration
  int a, b;

  // Input the two integers from user
  printf("Enter first integer: ");
  scanf("%d", &a);
  printf("Enter second integer: ");
  scanf("%d", &b);

  // Compare and display the conditions
  if (a == b) {
    printf("%d equals %d\n", a, b);
  } else if (a < b) {
    printf("%d is less than %d\n", a, b);
  } else {
    printf("%d is greater than %d\n", a, b);
  }

  return 0;
}