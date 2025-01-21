#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void GenerateFactors(int n, int factors[]) {
  for (int i = 1; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      factors[sizeof(factors) / sizeof(*factors)] = i;
      if (i * i != n) {
        factors[sizeof(factors) / sizeof(*factors) + 1] = n / i;
      }
      ++sizeof(factors) / sizeof(*factors);
    }
  }
}

int main() {
  int SampleNumbers[] = {3135, 45, 60, 81};
  for (size_t i = 0; i < sizeof(SampleNumbers) / sizeof(int); ++i) {
    int factors[2] = {};
    GenerateFactors(SampleNumbers[i], factors);
    printf("Factors of %d are: ", SampleNumbers[i]);
    for (size_t j = 0; j < sizeof(factors) / sizeof(*factors); ++j) {
      printf("%d ", factors[j]);
    }
    printf("\n");
  }
  return EXIT_SUCCESS;
}