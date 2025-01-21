#include "stdio.h"
int main() {
  int a, b;

  printf("Enter first value (0 or 1): ");
  scanf("%d", &a);

  printf("Enter second value (0 or 1): ");
  scanf("%d", &b);

  printf("a and b: %dnn", a && b);
  printf("a or b: %dn", a || b);
  printf("not a: %dn", !a);

  return 0;
}