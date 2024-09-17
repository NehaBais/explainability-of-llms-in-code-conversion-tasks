#include <math.h>
#include <stdio.h>

void factor(int num) {
  int i, j;
  printf("Factors of %d are:\n", num);

  for (i = 1; i <= sqrt(num) + 1; i++) {
    if (num % i == 0) {
      j = num / i;
            printf("%d and %d\n",i, j));
            ;
    }
  }
}

int main() {
  factor(100);
  factor(101);

  return 0;
}