#include <math.h>
#include <stdio.h>
#define MAX_FACTORS 1000

long factors(int n) {
  long factors[MAX_FACTORS];
  int i;
  factors[0] = n;
  factors[1] = 1L;
  for (i = n - 1; i >= sqrt(n); i--) {
    if (n % i == 0) {
      factors[2 * i] = i;
      factors[(2 * i + 1) / 2] = n / i;
    }
  }
  return factors;
}