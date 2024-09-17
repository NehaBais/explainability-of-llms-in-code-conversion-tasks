#include
#include
#include
int main() {
  int i;
  for (i = 45; i <= 64; i++) {
    int j, n = i;
    int factors[i];
    for (j = 0; j < sqrt(n); j++) {
      if (n % (j + 1) == 0) {
        factors[j] = j + 1;
      }
    }
    j++;
    if (j * j == n) {
      factors[j - 1] = j;
    }
    for (j--; j >= 0; j--) {
      printf("%i ", factors[j]);
    }
    printf("n");
  }
  return 0;
}