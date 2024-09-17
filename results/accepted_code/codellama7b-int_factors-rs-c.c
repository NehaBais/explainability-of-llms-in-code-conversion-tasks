#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
  int num = 100;
  printf("Factors of %d are: ", num);
  for (int i = 1; i <= sqrt(num) + 1; i++) {
    if (num % i == 0) {
      printf("%d, ", i);
      printf("%d\n", num / i);
    }
  }
}