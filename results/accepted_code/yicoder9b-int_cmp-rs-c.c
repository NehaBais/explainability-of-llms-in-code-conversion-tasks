#include <stdio.h>

int main() {
  int a, b; // The integers that will be compared
  printf("Please enter the first integer:\n");
  scanf("%d", &a);
  printf("Please enter the second integer:\n");
  scanf("%d", &b);
  if (a < b) {
    printf("%d is less than %d\n", a, b);
  } else if (a == b) {
    printf("%d equals %d\n", a, b);
  } else if (a > b) {
    printf("%d is greater than %d\n", a, b);
  }
  return 0;
}