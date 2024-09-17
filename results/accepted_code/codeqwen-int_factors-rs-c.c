#include <math.h>
#include <stdio.h>

void factor(int num, int factors[], int *n) {
  for (int i = 1; i <= sqrt(num); i++) {
    if (num % i == 0) {
      factors[(*n)++] = i;
      factors[(*n)++] = num / i;
    }
  }
}

int main() {
  int factors[10];
  int n = 0;
  factor(100, factors, &n);
  for (int i = 0; i < n; i++) {
    printf("%d ", factors[i]);
  }
  printf("\n");
  return 0;
}