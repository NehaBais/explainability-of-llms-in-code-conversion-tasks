#include <stdio.h>

int main() {
  int a, b;
  printf("Enter two integers:\n");
  scanf("%d %d", &a, &b);
  printf("a+b = %d\n", a + b);
  printf("a-b = %d\n", a - b);
  printf("a*b = %d\n", a * b);
  if (b != 0) {
    printf("a/b = %d, remainder %d\n", a / b, a % b);
  } else {
    printf("Cannot divide by zero.\n");
  }
  return 0;
}