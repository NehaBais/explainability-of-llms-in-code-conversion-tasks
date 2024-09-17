#include <stdio.h>
#include <stdlib.h>

// Function to find Factors
void factors(long n) {
  printf("%ld ", n); // always print number itself and 1
  for (long test = n - 1; test >= sqrt(n); test--) {
    if (n % test == 0) {
      printf("%ld ", test);
      printf("%ld\n", n / test);
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