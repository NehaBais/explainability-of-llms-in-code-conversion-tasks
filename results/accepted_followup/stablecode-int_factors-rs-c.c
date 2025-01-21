#include <math.h>
#include <stdio.h>

void factor(int num) {
  for (int i = 1; i <= sqrt(num) + 1; i++) {
    if (num % i == 0) {
      printf("%d and %d\n", i, num / i));
    }
  }
}

int main() {
  factor(100);
  factor(101);

  return 0;
}