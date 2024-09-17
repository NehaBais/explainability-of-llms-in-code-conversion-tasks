#include <stdio.h>

int main() {
  int a, b;

  printf("Enter value of a: ");
  scanf("%d", &a);

  printf("Enter value of b: ");
  scanf("%d", &b);

  if (a < b)
    printf("a is less than b\n");

  if (a > b)
    printf("a is greater than b\n");

  if (a == b)
    printf("a is equal to b\n");

  return 0;
}