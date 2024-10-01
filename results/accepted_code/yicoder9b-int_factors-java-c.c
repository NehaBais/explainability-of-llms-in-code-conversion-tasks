#include <math.h>
#include <stdio.h>

void factors(long n) {
  printf("%ld ", n);
  printf("1 ");
  for (long test = n - 1; test >= sqrtl(n); test--) {
    if (n % test == 0) {
      printf("%ld ", test);
      printf("%ld ", n / test);
    }
  }
}