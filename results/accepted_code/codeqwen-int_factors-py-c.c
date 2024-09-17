#include <math.h>
#include <stdio.h>

// Function to compute the factors of a positive integer
void factor(int n, int *factors1, int *size) {
  *size = 0;
  for (int x = 1; x <= sqrt(n); ++x) {
    if (n % x == 0) {
      factors1[(*size)++] = x;
      factors1[(*size)++] = n / x;
    }
  }
  // Reverse the array factors1 to get correct order of factors
  for (int i = *size / 2 - 1, j = *size - 1; i >= 0; --i, --j) {
    int temp = factors1[i];
    factors1[i] = factors1[j];
    factors1[j] = temp;
  }
}

int main() {
  int n = 45;
  int size = 0;
  int factors1[100] = {0}; // Assuming maximum size of input is 100
  factor(n, factors1, &size);
  printf("%d: factors: ", n);
  for (int i = 0; i < size; ++i) {
    printf("%d ", factors1[i]);
  }
  printf("\n");

  n = 53;
  size = 0;
  factor(n, factors1, &size);
  printf("%d: factors: ", n);
  for (int i = 0; i < size; ++i) {
    printf("%d ", factors1[i]);
  }
  printf("\n");

  n = 64;
  size = 0;
  factor(n, factors1, &size);
  printf("%d: factors: ", n);
  for (int i = 0; i < size; ++i) {
    printf("%d ", factors1[i]);
  }
  printf("\n");

  return 0;
}