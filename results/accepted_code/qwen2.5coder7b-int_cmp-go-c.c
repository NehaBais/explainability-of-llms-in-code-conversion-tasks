#include <stdio.h>

int main() {
  int n1, n2;

  printf("Enter number: ");
  if (scanf("%d", &n1) != 1) {
    printf("Invalid input\n");
    return 1; // Exit with error status
  }

  printf("Enter number: ");
  if (scanf("%d", &n2) != 1) {
    printf("Invalid input\n");
    return 1; // Exit with error status
  }

  if (n1 < n2)
    printf("%d less than %d\n", n1, n2);
  else if (n1 == n2)
    printf("%d equal to %d\n", n1, n2);
  else
    printf("%d greater than %d\n", n1, n2);

  return 0;
}