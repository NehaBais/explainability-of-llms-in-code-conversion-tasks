#include <stdio.h>

int main() {
  int a, b;

  printf("Enter first integer: ");
  scanf("%d", &a);

  printf("Enter second integer: ");
  scanf("%d", &b);

  if (a == b) {
    printf("%d equals %d\n", a, b);
  }
  if (a < b) {
    printf("%d is less than %d\n", a, b);
  }
  if (a > b) {
    printf("%d is greater than %d\n", a, b);
  }

  return 0;
}