#include <stdio.h>
#include <stdlib.h>

int main() {
  long n = 12; // Example positive integer

  int *factors = (int *)calloc(n + 1, sizeof(int));
  for (long test = 2; test <= n / test; ++test) {
    if (n % test == 0)
      factors[test] = 1;
  }

  printf("Factors of %ld are: ", n);
  for (int i = 2; i <= n; ++i) {
    if (factors[i] == 1)
      printf("%ld ", i);
  }
  printf("\n");

  free(factors); // Don't forget to free allocated memory
  return 0;
}