#include <math.h>
#include <stdlib.h>

long *factors(long n, int *size) {
  long sqrt_n = (long)sqrt(n);
  *size =
      2 + (sqrt_n -
           1); // Initialize the size of the array with a reasonable estimate.
  long *factors = malloc(sizeof(long) * (*size));
  if (!factors)
    return NULL; // Check for allocation failure.

  factors[0] = n;
  factors[1] = 1L;
  int i, j;

  for (i = n - 1; i >= sqrt_n; i--) {
    if (n % i == 0) {
      factors[j++] = i;
      factors[j++] = n / i;
    }
  }

  *size = j; // Update the size of array to the actual number of factors found.
  return factors;
}

int main() {
  int size;
  long *factors = factors(100, &size);

  for (int i = 0; i < size; i++) {
    printf("%ld ", factors[i]);
  }

  free(factors); // Don't forget to free the allocated memory.

  return 0;
}