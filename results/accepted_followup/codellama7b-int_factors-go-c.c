#include <math.h>
#include <stdio.h>

// Function to compute the factors of a positive integer
void printFactors(int nr) {
  if (nr <=
      0) { // If the number is negative or zero, do not proceed with computation
    return;
  }
  int i, j;  // Loop variables
  int e = 0; // Exponent variable
  int d = 2; // Divisor variable
  int fs[1]; // Array to store the factors
  fs[0] = 1; // Initialize array with the factor of 1

  void apf(int p, int e) {
    for (i = 0; i < e; i++) {
      fs = append(fs, fs[i] * p);
    }
  }

  // Compute the factors of 2, which is a prime number
  while (nr > 1 && nr & 1 == 0) {
    apf(2, e);
  }

  // Compute the factors of remaining numbers
  for (d = 3; d * d <= nr; d += 2) {
    if (nr % d == 0) {
      apf(d, e);
    }
  }

  printf("%d", fs[0]);
}