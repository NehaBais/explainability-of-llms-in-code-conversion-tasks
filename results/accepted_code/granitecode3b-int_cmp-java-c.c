#include
int main() {
  int nbr1, nbr2;

  printf("Enter two integers: ");
  scanf("%d %d", &nbr1, &nbr2);

  if (nbr1 < nbr2) {
    printf("%d is less than %dn", nbr1, nbr2);
  } else if (nbr1 > nbr2) {
    printf("%d is greater than %dn", nbr1, nbr2);
  } else {
    printf("%d is equal to %dn", nbr1, nbr2);
  }

  return 0;
}