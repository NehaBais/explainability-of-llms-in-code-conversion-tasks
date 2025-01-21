#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void compute_factors(long n) {
  long *factors = (long *)malloc((n + 1) * sizeof(long));
  int factor_count = 0;

  // add n and 1 to the factors array
  factors[factor_count++] = n;
  factors[factor_count++] = 1;

  for (long test = n - 1; test >= sqrt(n); test--) {
    if (n % test == 0) {
      factors[factor_count++] = test;
      factors[factor_count++] = n / test;
    }
  }

  printf("Factors of %ld are: ", n);
  for (int i = 0; i < factor_count; i++) {
    printf("%ld ", factors[i]);
  }
  printf("\n");

  // freeing the memory
  free(factors);
}

int main() {
  long number = 24;
  compute_factors(number);
  return 0;
}