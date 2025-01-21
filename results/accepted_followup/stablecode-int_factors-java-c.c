#include <math.h> // Include math library
#include <stdio.h>
#include <stdlib.h>

void factors(long n) {
  printf("%ld ", n);
  factors.add(1L); // Add 1 as a factor
  for (long test = n - 1; test >= sqrt(n); test--) {
    if (n % test == 0) {
      printf("%ld ", test);
      printf("%ld\n", n / test));
    }
  }
}

int main() {
  long n;
  printf("Enter a positive integer: ");
  scanf("%ld", &n);

  factors(n);
  return 0;
}