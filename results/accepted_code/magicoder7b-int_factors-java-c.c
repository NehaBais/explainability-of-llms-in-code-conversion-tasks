#include <stdio.h>
#define MAX_FACTORS                                                            \
  100 // maximum number of possible factors (for this size, the function should
      // work correctly)

long long int *factors(long n) {
  static long long int factors[MAX_FACTORS];
  int counter = 0;
  for (long test = n - 1; test >= sqrt(n); test--) {
    if (n % test == 0) {
      factors[counter++] = test;
      factors[counter++] = n / test;
    }
  }
  // sort the array using quicksort or similar method. Here, I just reverse it
  // to get factors from high to low
  for (int i = 0; i < counter / 2; i++) {
    long long int tmp = factors[i];
    factors[i] = factors[counter - 1 - i];
    factors[counter - 1 - i] = tmp;
  }
  return factors;
}