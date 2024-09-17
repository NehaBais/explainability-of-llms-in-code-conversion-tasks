#include <math.h>
#include <stdio.h>

int factor(int n) {
  int factors1[100], factors2[100], i, j;
  int numFactors = 0;

  for (i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      factors1[numFactors] = i;
      factors2[numFactors] = n / i;
      numFactors++;
    }
  }

  if (i * i == n) {
    factors1[numFactors] = i;
    numFactors++;
  }

  for (i = 0; i < numFactors; i++) {
    printf("%d ", factors1[i]);
  }

  return numFactors;
}

int main() {
  int i;

  for (i = 45; i <= 64; i++) {
    printf("%d: factors: ", i);
    factor(i);
    printf("\n");
  }

  return 0;
}