#include <stdio.h>

void compare(int a, int b) {
  if (a == b)
    printf("%d equals %d\n", a, b);

  if (a < b)
    printf("%d is less than %d\n", a, b);

  if (a > b)
    printf("%d is greater than %d\n", a, b);
}

int main() {
  int num1, num2;

  printf("Enter first number: ");
  scanf("%d", &num1);

  printf("Enter second number: ");
  scanf("%d", &num2);

  compare(num1, num2);

  return 0;
}