#include <stdio.h>

int main() {
  int n1, n2;

  printf("Enter number 1: ");
  scanf("%d", &n1);
  printf("Enter number 2: ");
  scanf("%d", &n2);

  if (n1 < n2) {
    printf("%d less than %d\n", n1, n2);
  } else if (n1 == n2) {
    printf("%d equal to %d\n", n1, n2);
  } else if (n1 > n2) {
    printf("%d greater than %d\n", n1, n2);
  }

  return 0;
}