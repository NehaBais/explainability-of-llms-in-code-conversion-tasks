#include <stdio.h>

int main() {
  int A, b;

  if (!(scanf("%d %d", &A, &b) == 2)) {
    printf("could not read the numbers\n");
    return 1;
  }

  // test for less-than
  if (A < b)
    printf("%d Is less than %d\n", A, b);

  // test for equality
  if (A == b)
    printf("%d Is equal to %d\n", A, b);

  // test for greater-than
  if (A > b)
    printf("%d Is greater than %d\n", A, b);
}