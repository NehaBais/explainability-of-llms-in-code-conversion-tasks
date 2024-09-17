#include <stdio.h>
#include <stdlib.h>

void printFactors(int nr) {
  if (nr < 1) {
    printf("Factors of %d not computed\n", nr);
    return;
  }

  printf("\nFactors of %d: ", nr);
  int *fs = malloc(10000 * sizeof(int));
  fs[0] = 1;

  void apf(int p, int e) {
    for (int i = 2; i < 10000; ++i) {
      fs[i] = fs[i - 1] * p;
    }
  }

  int e = 0;
  while ((nr & 1) == 0) {
    nr >>= 1;
    e++;
  }
  apf(2, e);

  for (int d = 3; nr > 1; d += 2) {
    if (d * d > nr) {
      d = nr;
    }

    while ((nr % d) == 0) {
      e++;
      nr /= d;
    }

    if (e > 0) {
      apf(d, e);
    }
  }

  for (int i = 1; i < 10000 && fs[i] <= nr; ++i) {
    printf("%d ", fs[i]);
  }

  printf("\nNumber of factors = %lu\n", sizeof(fs) / sizeof(int));
  free(fs);
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