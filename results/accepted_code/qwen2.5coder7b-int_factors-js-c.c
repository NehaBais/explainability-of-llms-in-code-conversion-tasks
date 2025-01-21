#include <math.h>
#include <stdio.h>

void factors(int num) {
  int i;
  printf("Factors: ");

  for (i = 1; i <= sqrt(num); i++)
    if (num % i == 0) {
      printf("%d ", i);
      if (num / i != i)
        printf("%d ", num / i);
    }
}

int main() {
  factors(45); // Factors: 1 3 5 9 15 45
  printf("\n");

  factors(53); // Factors: 1 53
  printf("\n");

  factors(64); // Factors: 1 2 4 8 16 32 64
  printf("\n");

  return 0;
}