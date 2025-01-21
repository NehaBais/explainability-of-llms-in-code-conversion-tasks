#include <math.h>
#include <stdlib.h>

// Function to find factors of a number
void factors(long n) {
  if (n <= 0)
    return; // Error for invalid input

  printf("1\n"); // Always print 1 as factor

  for (long test = n - 1; test >= sqrt(n); test--) {
    if (n % test == 0) {
      printf("%ld\n", test);     // Print the first factor
      printf("%ld\n", n / test); // Also print the second factor
    }
  }

  return;
}