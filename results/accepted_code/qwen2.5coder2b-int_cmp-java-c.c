#include <stdio.h>
#include <stdlib.h>

int main() {
  int nb1, nb2;

  printf("Enter two integers: ");
  if (scanf("%d %d", &nb1, &nb2) != 2) {
    fprintf(stderr, "Invalid input\n");
    return EXIT_FAILURE;
  }

  if (nb1 < nb2)
    printf("%d is less than %d\n", nb1, nb2);
  else if (nb1 > nb2)
    printf("%d is greater than %d\n", nb1, nb2);
  else
    printf("%d is equal to %d\n", nb1, nb2);

  return EXIT_SUCCESS;
}