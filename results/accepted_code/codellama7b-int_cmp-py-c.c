#include <stdio.h>

int main(void) {
  int a, b;

  // Get input from the user for both integers
  printf("Enter value of a: ");
  scanf("%d", &a);
  printf("Enter value of b: ");
  scanf("%d", &b);

  if (a < b) {
    printf("a is less than b\n");
  } else if (a > b) {
    printf("a is greater than b\n");
  } else if (a == b) {
    printf("a is equal to b\n");
  }

  return 0;
}