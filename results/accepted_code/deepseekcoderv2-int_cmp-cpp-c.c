#include <stdio.h>

int main() {
  int a, b;

  // Read two integers from the user
  if (scanf("%d %d", &a, &b) != 2) {
    fprintf(stderr, "could not read the numbers\n");
    return 1;
  }

  // Test for less-than
  if (a < b)
    printf("%d is less than %d\n", a, b);

  // Test for equality
  if (a == b)
    printf("%d is equal to %d\n", a, b);

  // Test for greater-than
  if (a > b)
    printf("%d is greater than %d\n", a, b);

  return 0;
}