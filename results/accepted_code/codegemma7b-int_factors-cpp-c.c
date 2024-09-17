#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *GenerateFactors(int n) {
  int *factors = malloc(sizeof(int) * 2);
  factors[0] = 1;
  factors[1] = n;

  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      factors = realloc(factors, sizeof(int) * (strlen(factors) + 2));
      factors[strlen(factors)] = i;

      if (i * i != n) {
        factors = realloc(factors, sizeof(int) * (strlen(factors) + 2));
        factors[strlen(factors)] = n / i;
      }
    }
  }

  return factors;
}

int main() {
  int SampleNumbers[] = {3135, 45, 60, 81};

  for (int i = 0; i < sizeof(SampleNumbers) / sizeof(int); i++) {
    int *factors = GenerateFactors(SampleNumbers[i]);
    printf("Factors of %4d are: ", SampleNumbers[i]);

    for (int j = 0; j < strlen(factors); j++) {
      printf("%d ", factors[j]);
    }

    printf("\n");
    free(factors);
  }

  return EXIT_SUCCESS;
}