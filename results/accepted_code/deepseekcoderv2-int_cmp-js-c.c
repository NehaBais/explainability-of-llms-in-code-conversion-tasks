#include <stdio.h>

void compare(int a, int b) {
  if (a == b) {
    printf("%d equals %d\n", a, b);
  } else if (a < b) {
    printf("%d is less than %d\n", a, b);
  } else if (a > b) {
    printf("%d is greater than %d\n", a, b);
  }
}

int main() {
  int a, b;

  // Get two integers from the user
  printf("Enter the first integer: ");
  scanf("%d", &a);
  printf("Enter the second integer: ");
  scanf("%d", &b);

  // Compare the integers and display the result
  compare(a, b);

  return 0;
}