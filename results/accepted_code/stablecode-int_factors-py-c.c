#include <math.h>
#include <stdio.h>

void factor(int n) {
  int factors1[100], factors2[100];
  int i = 0;

  for (int x = 1; x <= sqrt(n); x++) {
    if (n % x == 0) {
      factors1[i] = x;
      factors2[i] = n / x;
      i++;
    }
  }

  printf("Factors of number: %d\n", n);
  for (int j = 0; j < i; j++) {
    printf("%d ", factors1[j]);
    if (factors2[j] == factors1[j])
            printf("(%d, %d)\n", factors1[j], factors2[j]));
    else
            printf("(%d, %d), Factor repetition\n", factors1[j], factors2[j]));
  }
}

int main() {
  factor(45);
  factor(53);
  factor(64);

  return 0;
}