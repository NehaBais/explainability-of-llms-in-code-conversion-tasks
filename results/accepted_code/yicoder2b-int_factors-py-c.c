#include <stdio.h>

void factor(int n) {
  for (int x = 1; x <= n; x++) {
    if (n % x == 0) {
      printf("%d ", x);
    }
  }
  printf("\n");
}

int main() {
  factor(45);
  factor(53);
  factor(64);
  return 0;
}