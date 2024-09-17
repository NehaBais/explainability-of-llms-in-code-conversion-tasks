#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

void factors(int num) {
  int n_factors[num], count = 0, i;

  for (i = 1; i <= sqrt(num); i++) {
    if (num % i == 0) {
      n_factors[count] = i;
      count++;
      if (num / i != i) {
        n_factors[count] = num / i;
        count++;
      }
    }
  }

  qsort(n_factors, count, sizeof(int), compare); // numeric sort

  for (i = 0; i < count; i++) {
    printf("%d ", n_factors[i]);
  }
}

int main() {
  factors(45); // Outputs: 1 3 5 9 15 45
  printf("\n");

  factors(53); // Outputs: 1 53
  printf("\n");

  factors(64); // Outputs: 1 2 4 8 16 32 64
  printf("\n");

  return 0;
}