#include <stdio.h>
#include <stdlib.h>

int64_t apf(int64_t p, int e) { return (int64_t)p * (int64_t)e; }

void printFactors(int nr) {
  printf("Factors of %d: ", nr);

  for (int i = 1; i <= nr / 2; i++) {
    if (nr % i == 0) {
      printf("%d, ", i);
    }
  }

    printf("\nNumber of factors = %d\n", nr - 2 * (nr / 2)));
}

int main() {
  printFactors(-1);
  printFactors(0);
  printFactors(1);
  printFactors(2);
  printFactors(3);
  printFactors(53);
  printFactors(45);
  printFactors(64);

  return 0;
}