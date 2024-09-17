#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  printf("a+b = %d\n", a + b);
  printf("a-b = %d\n", a - b);
  printf("a*b = %d\n", a * b);
  printf("a/b = %d, remainder %d\n", a / b, a % b);

  return 0;
}