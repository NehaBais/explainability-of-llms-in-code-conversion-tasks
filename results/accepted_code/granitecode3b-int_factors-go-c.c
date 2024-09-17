#include
int main() {
  int64_t nr;
  printf("Enter a positive integer: ");
  scanf("%" SCNd64, &nr);

  if (nr < 1) {
    printf("Factors of %" PRId64 " not computedn", nr);
    return 0;
  }

  printf("Factors of %" PRId64 ": ", nr);
  int64_t fs[1];
  fs[0] = 1;

  for (int i = 2, e = 0; nr % 2 == 0; i *= 2, e++)
    ;
  void (*apf)(int64_t, int) = NULL;
  if (e > 0) {
    apf = &printFactor;
    printf("2:");
    printFactor(2, e);
  }

  for (int d = 3, e = 0; d * d <= nr; d += 2) {
    while (nr % d == 0) {
      e++;
      nr /= d;
    }
    if (e > 0) {
      apf = (apf == NULL) ? &printFactor : apf;
      printf("%" PRId64 ":", d);
      printFactor(d, e);
    }
  }

  if (nr > 1) {
    apf = (apf == NULL) ? &printFactor : apf;
    printf("%" PRId64 "", nr);
  }

  printf("nnNumber of factors = %dn", e + (int)(fs - fs));

  return 0;
}
void printFactor(int64_t p, int e) {
  for (int i = 1; i <= e; i++) {
    printf("%" PRId64 "", p);
  }
  printf("n");
}