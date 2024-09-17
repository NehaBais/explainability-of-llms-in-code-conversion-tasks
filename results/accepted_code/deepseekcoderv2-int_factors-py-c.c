#include <math.h>
#include <stdio.h>
int factor(int n) {
  int i;
  int factors[n];
  int num_factors = 0;
  for (i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      factors[num_factors++] = i;
      if (i != n / i) {
        factors[num_factors++] = n / i;
      }
    }
  }
  return num_factors;
}
int main() {
  int factor(n);
  printf("%d: %d\n", 45, factor(45));
  printf("%d: %d\n", 53, factor(53));
  printf("%d: %d\n", 64, factor(64));
  return 0;
}