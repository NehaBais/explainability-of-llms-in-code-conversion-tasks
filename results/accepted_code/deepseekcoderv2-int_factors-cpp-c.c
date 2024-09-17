#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void GenerateFactors(int n, int *factors) {
  int factorCount = 0;  // Count of found factors
  bool isFactor[n + 1]; // Array to track if a number has been checked for being
                        // a factor

  memset(isFactor, false, sizeof(isFactor));

  for (int i = 2; i * i <= n; ++i) {
    if (!isFactor[i]) {
      factors[factorCount++] = i; // Store the found factor in the array

      if (n % i == 0) {
        factors[factorCount++] = n / i;
      }

      for (int j = 2 * i; j <= n; j += i) {
        isFactor[j] =
            true; // Mark all multiples of the factor as having been checked
      }
    }
  }
}

int main() {
  const int SampleNumbers[] = {3135, 45, 60, 81};
  size_t sampleCount = sizeof(SampleNumbers) / sizeof(int);

  for (size_t i = 0; i < sampleCount; ++i) {
    int factors[sampleCount]; // Array to store the found factors
    GenerateFactors(SampleNumbers[i], factors);

    printf("Factors of %d are: ", SampleNumbers[i]);
    for (int j = 0; j < sampleCount; ++j) {
      if (factors[j] !=
          0) { // Check if the factor is valid and not already printed
        printf("%d ", factors[j]);
      }
    }
    printf("\n");
  }

  return EXIT_SUCCESS;
}