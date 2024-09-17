#include <stdio.h>

int main() {
  int nbr1, nbr2;

  printf("Enter two integers: ");
  scanf("%d %d", &nbr1, &nbr2);

  if (nbr1 < nbr2)
    printf("%d is less than %d\n", nbr1, nbr2);

  if (nbr1 > nbr2)
    printf("%d is greater than %d\n", nbr1, nbr2);

  if (nbr1 == nbr2)
    printf("%d is equal to %d\n", nbr1, nbr2);

  return 0;
}