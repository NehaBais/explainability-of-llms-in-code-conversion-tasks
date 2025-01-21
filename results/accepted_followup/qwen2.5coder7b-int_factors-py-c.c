#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void factor(int n) {
  int i, x = 1;
  int *factors1 = malloc(n * sizeof(int));
  int *factors2 = malloc(n * sizeof(int));

  while (x < sqrt(n)) {
    if (n % x == 0) {
      factors1[i] = x;
      factors2[i++] = n / x;
    }
    x++;
  }

  if (x * x == n)
    factors1[i++] = x;

  for (; i > 0; i--)
    printf("%d ", factors2[i - 1]);

  free(factors1);
  free(factors2);
}

int main() {
  factor(45);
  printf("\n");
  factor(53);
  printf("\n");
  factor(64);
  return 0;
}