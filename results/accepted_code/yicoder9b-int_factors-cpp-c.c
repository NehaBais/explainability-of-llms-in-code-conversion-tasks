#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int *GenerateFactors(int n, int *size) {
  int *factors = malloc(n * sizeof(int));
  *size = 0;
  for (int i = 1; i <= n; ++i) {
    if (n % i == 0) {
      factors[(*size)++] = i;
    }
  }

  return factors;
}

void printFactors(int n, int *factors, int size) {
  printf("Factors of %4d are: ", n);
  for (int i = 0; i < size; ++i) {
    printf("%d ", factors[i]);
  }
  printf("\n");
}

void main() {
  const int SampleNumbers[] = {3135, 45, 60, 81};
  int size = 0;

  for (size_t i = 0; i < sizeof(SampleNumbers) / sizeof(int); ++i) {
    int *factors = GenerateFactors(SampleNumbers[i], &size);
    printFactors(SampleNumbers[i], factors, size);
    free(factors); // Don't forget to free the allocated memory.
  }
}