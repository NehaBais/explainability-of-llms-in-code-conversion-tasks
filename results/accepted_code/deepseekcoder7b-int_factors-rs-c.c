#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

void factor(int num) {
  int factors[1024]; // assuming maximum of 1024 factors for simplicity
  int i, j = 0, limit;
  limit = sqrt(num);

  for (i = 1; i <= limit; i++) {
    if (num % i == 0) {
      factors[j++] = i;       // push smallest factor to factors array
      factors[j++] = num / i; // push largest factor to factors array
    }
  }

  qsort(factors, j, sizeof(int),
        compare); // sort the factors into numerical order for viewing purposes

  for (i = 0; i < j; i++) {
    printf("%d ", factors[i]); // prints each factor
  }
}

int main() {
  int num = 100;
  printf("Factors of %d: ", num);
  factor(num);

  return 0;
}