#include <stdio.h>
#include <stdlib.h>

void GenerateFactors(int n) {
  int factors[] = {1, n};
  int factorCount = 2;

  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      factors[factorCount++] = i;
      if (i * i != n)
        factors[factorCount++] = n / i;
    }
  }

  // Sort the factors array
  for (int i = 1; i < factorCount - 1; ++i) {
    for (int j = 0; j < factorCount - i - 1; ++j) {
      if (factors[j] > factors[j + 1]) {
        int temp = factors[j];
        factors[j] = factors[j + 1];
        factors[j + 1] = temp;
      }
    }
  }

  printf("Factors of %d are: ", n);
  for (int i = 0; i < factorCount; ++i) {
    printf("%d ", factors[i]);
  }
  printf("\n");
}

int main() {
  int SampleNumbers[] = {3135, 45, 60, 81};
  int sampleSize = sizeof(SampleNumbers) / sizeof(int);

  for (int i = 0; i < sampleSize; ++i) {
    GenerateFactors(SampleNumbers[i]);
  }

  return EXIT_SUCCESS;
}