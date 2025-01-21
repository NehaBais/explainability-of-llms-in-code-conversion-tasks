#include <stdio.h>
#include <stdlib.h>

void printFactors(int64_t nr) {
  if (nr < 1) {
        printf("
Factors of %lld not computed", nr);
        return;
  }
    printf("
Factors of %lld: ", nr);
    int64_t *fs = malloc(sizeof(int64_t));
    fs[0] = 1;
    
    void apf(int64_t p, int e) {
    int n = 1; // Initial length of fs is 1
    for (int i = 0, pp = p; i < e; i++, pp *= p) {
      for (int j = 0; j < n; j++) {
        int64_t *newFs = malloc(sizeof(int64_t) * (n + 1));
        for (int k = 0; k < n; k++) {
          newFs[k] = fs[j] * fs[k];
        }
        newFs[n] = fs[j] * pp;
        free(fs);
        fs = newFs;
        n++;
      }
    }
    }
    
    int e = 0;
    while (nr % 2 == 0) {
    nr /= 2;
    e++;
    }
    apf(2, e);
    
    for (int64_t d = 3; nr > 1; d += 2) {
    if (d * d > nr) {
      d = nr;
    }
    int e = 0;
    while (nr % d == 0) {
      nr /= d;
      e++;
    }
    if (e > 0) {
      apf(d, e);
    }
    }
    
    for (int i = 0; i < n; i++) {
    printf("%lld ", fs[i]);
    }
    printf("
Number of factors = %zu", n);
    
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