#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n1, n2;

  printf("Enter number: ");
  if (scanf("%d", &n1) != 1) {
    fprintf(stderr, "Invalid input\n");
    return EXIT_FAILURE;
  }

  printf("Enter number: ");
  if (scanf("%d", &n2) != 1) {
    fprintf(stderr, "Invalid input\n");
    return EXIT_FAILURE;
  }

  if (n1 < n2) {
    printf("%d less than %d\n", n1, n2);
  } else if (n1 == n2) {
    printf("%d equal to %d\n", n1, n2);
  } else {
    printf("%d greater than %d\n", n1, n2);
  }

  return EXIT_SUCCESS;
}