#include <math.h>
void factor(int n) {
  int i, factors1[], factors2[];
  for (i = 1; i <= isqrt(n); i++) {
    if (n % i == 0) {
      factors1[i] = x;
      factors2[i] = n / x;
    }
  }
}

int main() {
  int i, factors1[], factors2[];
  for (i = 45, 53, 64; i < 0; i++) {
    factor(i);
    printf("%d: factors: %s\n", i, factor(i));
  }
}