#include <stdio.h>
#include <stdlib.h>

int main() {
  int n1, n2;

  printf("Enter the first number: ");
  scanf("%d", &n1);

  printf("Enter the second number: ");
  scanf("%d", &n2);

  if (n1 < n2) {
    printf("%d is less than %d\n", n1, n2);
  } else if (n1 == n2) {
    printf("%d is equal to %d\n", n1, n2);
  } else if (n1 > n2) {
    printf("%d is greater than %d\n", n1, n2);
  }

  return 0;
}