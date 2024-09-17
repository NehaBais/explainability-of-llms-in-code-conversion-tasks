#include <math.h>
#include <stdio.h>

void GenerateFactors(int n, int *factors, int *count) {
  factors[(*count)++] = 1;
  factors[(*count)++] = n;

  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      factors[(*count)++] = i;
      if (i * i != n)
        factors[(*count)++] = n / i;
    }
  }

  qsort(factors, *count, sizeof(int), cmpfunc);
}

int cmpfunc(const void *a, const void *B) {
   return ( (*(int*)A - *(int*)B );
}

int main() {
  const int SampleNumbers[] = {3135, 45, 60, 81};
  const int num_samples = sizeof(SampleNumbers) / sizeof(int);

  for (size_t i = 0; i < num_samples; ++i) {
    int factors[100], count = 0;
    GenerateFactors(SampleNumbers[i], factors, &count);

    printf("Factors of %4d are: ", SampleNumbers[i]);
    for (size_t j = 0; j < count; ++j) {
      printf("%3d ", factors[j]);
    }
    printf("\n");
  }

  return 0;
}