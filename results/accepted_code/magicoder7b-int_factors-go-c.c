#include <stdio.h>
#define MAX_FACTOR 1000000000

void printFactors(long long nr) {
  if (nr <= 0) {
    printf("Factors of %lld not computed\n", nr);
    return;
  }

  printf("Factors of %lld: ", nr);
  int i, e = 0, d = 2;
  long long fs[MAX_FACTOR], *pfs = &fs[0];
  fs[0] = 1;

  while (nr & 1 == 0) {
    nr >>= 1;
    ++e;
  }

  for (i = 0; i < e; i++) {
    *pfs++ = d;
  }

  if (nr > 1) {
    for (d = 3; d * d <= nr; d += 2) {
      while (nr % d == 0) {
        ++e;
        nr /= d;
      }

      if (e > 0) {
        for (i = 0; i < e; i++) {
          *pfs++ = d;
        }
      }
    }

    if (nr > 1) {
      d = nr;
      while (d % 2 == 0) {
        d /= 2;
      }

      for (i = 0; i < e; i++) {
        *pfs++ = d;
      }
    }
  }

  printf("%lld\nNumber of factors = %d", fs[0], pfs - &fs[0]);
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
  printFactors(600851475143LL); // Notice the 'LL' suffix, which means that it's
                                // a long long integer.

  return 0;
}