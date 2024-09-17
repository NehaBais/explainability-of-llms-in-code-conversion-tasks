#include <stdio.h>
#include <stdlib.h>

// function to check if 'num' is prime
int is_prime(int num) {
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0)
      return 0;
  }
  return 1;
}

void factor(int num) {
  int *factors = malloc(100 * sizeof(int)); // allocate memory for factors
  int count = 0;

  for (int i = 1; i <= num / 2 + 1; i++) {
    if (num % i == 0) {
      factors[count++] = i;
      if (i != num / i)
        factors[count++] = num / i;
    }
  }

  // Sorting factors using Bubble Sort
  for (int i = 0; i < count - 1; i++)
    for (int j = 0; j < count - i - 1; j++)
      if (factors[j] > factors[j + 1]) {
        int temp = factors[j];
        factors[j] = factors[j + 1];
        factors[j + 1] = temp;
      }

  // Print the array
  for (int i = 0; i < count; i++)
    printf("%d ", factors[i]);

  free(factors); // Free allocated memory
}

int main() {
  factor(100);
  return 0;
}