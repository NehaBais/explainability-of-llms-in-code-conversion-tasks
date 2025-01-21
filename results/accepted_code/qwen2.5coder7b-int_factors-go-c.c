#include <stdio.h>
#include <stdlib.h>

void printFactors(int64_t nr) {
  if (nr < 1) {
    printf("\nFactors of %lld not computed\n", nr);
    return;
  }

  printf("\nFactors of %lld: ", nr);

  // array to store factors
  int64_t *fs = malloc(sizeof(int64_t));
  fs[0] = 1;

  int i, e, n, pp, j;

  // check if number is even
  for (e = 0; nr & 1 == 0; e++)
    nr >>= 1;

  // calculate factors of 2
  apf(2, e);

  for (d = 3; nr > 1; d += 2) {
    if (d * d > nr)
      d = nr;

    // find number of times the prime factor divides the number
    for (e = 0; nr % d == 0; e++)
      nr /= d;

    if (e > 0) {
      apf(d, e);
    }
  }

  // print factors
  n = sizeof(fs) / sizeof(fs[0]);
  for (i = 0; i < n; i++) {
    printf("%lld ", fs[i]);
  }

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