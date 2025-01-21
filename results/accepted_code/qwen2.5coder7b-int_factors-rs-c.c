#include <stdio.h>
#include <stdlib.h>

void printFactors(int n) {
  int i;

  printf("The factors of %d are: ", n);
  for (i = 1; i <= n / 2; i++) {
    if (n % i == 0)
      printf("%d ", i);
  }
}

int main() {
  printFactors(100);
  printf("\nThe factors of 101 are: ");
  printFactors(101);

  return 0;
}