#include <stdio.h>
#define MAXFACTORS 2048

int main() {
  printFactors(-1);
  printFactors(0);
  printFactors(1);
  printFactors(2);
  printFactors(3);
  printFactors(53);
  printFactors(45);
  printFactors(64);
  printFactors(600851475143);
  printFactors(999999999999999989);
  return 0;
}

void printFactors(int nr) {
  if (nr < 1) {
    printf("Factors of %d not computed\n", nr);
    return;
  }
  int factors[MAXFACTORS] = {1};
  printf("Factors of %d: ", nr);
  for (int i = 0; i < MAXFACTORS; i++) {
    if (nr == 1)
      break;
    for (int j = 0; j <= i && nr / factors[j] > 0; j++) {
      for (int k = 0; k <= j; k++) {
        factors[k * i + j] *= factors[j];
      }
      nr /= factors[j];
    }
  }
  printf("Number of factors = %d\n", MAXFACTORS);
  for (int i = 0; i < MAXFACTORS; i++) {
    if (i > 0)
      printf(" ");
    printf("%d", factors[i]);
  }
}