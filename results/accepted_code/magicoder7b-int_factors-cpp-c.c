#include <stdio.h>
#define MAX 1024

void GenerateFactors(int n) {
  int factors[MAX] = {1, n};
  int j;
  for (j = 2; j * j <= n; ++j) {
    if (n % j == 0) {
      printf("%d ", j);
      if (j * j != n) {
        printf("%d ", n / j);
      }
    }
  }
}

int main() {
  const int SampleNumbers[] = {3135, 45, 60, 81};
  int i;
  for (i = 0; i < sizeof(SampleNumbers) / sizeof(int); ++i) {
    printf("Factors of %d are: ", SampleNumbers[i]);
    GenerateFactors(SampleNumbers[i]);
    printf("\n");
  }
  return 0;
}