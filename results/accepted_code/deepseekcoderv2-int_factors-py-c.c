#include <math.h>
#include <stdio.h>

void factor(int n) {
  int x;
  for (x = 1; x * x < n; x++) {
    if (n % x == 0) {
      printf("%d ", x);
      if (n / x != x) {
        printf("%d ", n / x);
      }
    }
  }
  if (x * x == n) {
    printf("%d ", x);
  }
}

int main() {
  int numbers[] = {45, 53, 64};
  for (int i = 0; i < 3; i++) {
    printf("%i: factors: ", numbers[i]);
    factor(numbers[i]);
    printf("\n");
  }
  return 0;
}