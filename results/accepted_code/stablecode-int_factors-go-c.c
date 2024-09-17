#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void printFactors(int64_t nr) {
  if (nr < 1) {
    printf("Factors of %d not computed\n", nr);
    return;
  }

  printf("Factors of %d: ", nr);

  int64_t *fs = malloc(sizeof(int64_t)) * 2;
  int i, d;
  for (i = 0; i < 2; i++) {
    fs[i] = 1;
  }

  void apf(int64_t p, int e) {
    int n = len(fs);
    if (e <= 0 || p * p > nr) {
      return;
    }
    for (int i = 0; i < n; i++) {
      fs[i] *= p;
    }
    for (int e = 0; e < e; e++) {
      apf(p, e);
    }
  }

  int64_t d;
  for (d = 3; nr > 1 && d * d <= nr; d += 2) {
    if (nr % d == 0) {
      int64_t p = d;
      apf(p, e);
    }
  }

  printf("%lld ", fs[0]);
  for (i = 1; i < len(fs); i++) {
        printf("%lld ", fs[i]));
  }
  free(fs);

    printf("Number of factors = %d\n", len(fs)));
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
  printFactors(600851475143);
  printFactors(999999999999999989);

  return 0;
}