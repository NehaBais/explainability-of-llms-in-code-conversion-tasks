#include <math.h> // include this line to get rid of the error
#include <stdio.h>
#include <stdlib.h>

int *factors(int num, int *n_factors) {
  int i;
  for (i = 1; i <= sqrt(num); i++) {
    if (num % i == 0) {
      *n_factors += 1;
      if (num / i != i)
        *n_factors += 1;
    }
  }
  int *arr = malloc(*n_factors * sizeof(int));
  *n_factors = 0;
  for (i = 1; i <= sqrt(num); i++) {
    if (num % i == 0) {
      arr[(*n_factors)++] = i;
      if (num / i != i)
        arr[(*n_factors)++] = num / i;
    }
  }
  return arr;
}

int main() {
  int n_factors, *facts;
  facts = factors(45, &n_factors);
  for (int i = 0; i < n_factors; ++i)
    printf("%d ", facts[i]);
  free(facts);
  return 0;
}