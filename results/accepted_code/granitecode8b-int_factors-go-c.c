#include
#include
void printFactors(int64_t nr);
int main() {
  printf("Factors of -1:n");
  printFactors(-1);
  printf("Factors of 0:n");
  printFactors(0);
  printf("Factors of 1:n");
  printFactors(1);
  printf("Factors of 2:n");
  printFactors(2);
  printf("Factors of 3:n");
  printFactors(3);
  printf("Factors of 53:n");
  printFactors(53);
  printf("Factors of 45:n");
  printFactors(45);
  printf("Factors of 64:n");
  printFactors(64);
  printf("Factors of 600851475143:n");
  printFactors(600851475143);
  printf("Factors of 999999999999999989:n");
  printFactors(999999999999999989);
  return 0;
}
void printFactors(int64_t nr) {
  if (nr < 1) {
    printf("Factors of %ld not computedn", nr);
    return;
  }
  printf("Factors of %ld: ", nr);
  int64_t *fs = malloc(sizeof(int64_t));
  fs[0] = 1;
  int64_t i, pp;
  for (i = 2, pp = 2; nr % i == 0; i += 2) {
    for (int j = 0; j < sizeof(fs) / sizeof(fs[0]); j++) {
      fs = realloc(fs, sizeof(fs) * 2);
      for (int k = j + 1; k < sizeof(fs) / sizeof(fs[0]); k++) {
        fs[k] = fs[j] * i;
      }
    }
  }
  for (i = 3; nr > 1; i += 2) {
    if (i * i > nr) {
      i = nr;
    }
    int e = 0;
    while (nr % i == 0) {
      nr /= i;
      e++;
    }
    if (e > 0) {
      for (int j = 0; j < sizeof(fs) / sizeof(fs[0]); j++) {
        fs = realloc(fs, sizeof(fs) * 2);
        for (int k = j + 1; k < sizeof(fs) / sizeof(fs[0]); k++) {
          fs[k] = fs[j] * i;
        }
      }
    }
  }
  for (i = 0; i < sizeof(fs) / sizeof(fs[0]); i++) {
    printf("%ld ", fs[i]);
  }
  printf("nNumber of factors = %ldn", sizeof(fs) / sizeof(fs[0]));
  free(fs);
}