#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

// Function to find factors of a number
void factors(long n) {
  if (n <= 0)
    return; // Error for invalid input

  printf("%ld\n", 1); // Always print 1 as factor

  for (long test = n - 1; test >= sqrt(n); test--) {
    if (n % test == 0) {
      printf("%ld\n", test);     // Print the first factor
      printf("%ld\n", n / test); // Also print the second (and only for prime
                                 // numbers) factor
    }
  }

  return;
}