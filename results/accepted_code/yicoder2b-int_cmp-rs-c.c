#include <stdio.h>

int main() {
  int a, b;
  printf("Enter first integer:\n");
  scanf("%d", &a);
  printf("Enter second integer:\n");
  scanf("%d", &b);
  if (a < b) {
    printf("The first integer is less than the second one.\n");
  } else if (a == b) {
    printf("The first integer equals to the second one.\n");
  } else if (a > b) {
    printf("The first integer is greater than the second one.\n");
  };
  return 0;
}