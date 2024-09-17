#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Function for comparing two factors
int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

void factors(int num) {
  int n_factors[1000]; // Define a maximum size here
  int i, count = 0;

  for (i = 1; i <= floor(sqrt(num)); i++) {
    if (num % i == 0) {
      n_factors[count++] = i;
      if (num / i != i)
        n_factors[count++] = num / i;
    }
  }

  qsort(n_factors, count, sizeof(int), compare); // Sort the factors

  for (i = 0; i < count; ++i) {
    printf("%d ", n_factors[i]);
  }
}

int main() {
  factors(45);
  printf("\n");
  factors(53);
  printf("\n");
  factors(64);

  return 0;
}