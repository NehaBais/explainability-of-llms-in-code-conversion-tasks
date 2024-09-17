#include <stdio.h>

int main() {
  int a, b;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  // test for less-than
  if (a < b)
    printf("%d is less than %d\n", a, b);

  // test for equality
  if (a == b)
    printf("%d is equal to %d\n", a, b);

  // test for greater-than
  if (a > b)
    printf("%d is greater than %d\n", a, b);
}