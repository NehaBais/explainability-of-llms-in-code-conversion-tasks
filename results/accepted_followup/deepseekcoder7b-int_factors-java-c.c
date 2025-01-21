#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return (*(long *)a - *(long *)b); }

void factors(long n, long **result, int *size) {
  *size = 0;
  long *arr = malloc(n / 2 * sizeof(long));

  for (long i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      arr[(*size)++] = i;
      if (i != n / i) {
        arr[(*size)++] = n / i;
      }
    }
  }

  qsort(arr, *size, sizeof(long), compare);
  *result = arr;
}

int main() {
  long num = 24; // for example
  int size;
  long *fact_array;
  factors(num, &fact_array, &size);

  printf("Factors of %ld are: ", num);
  for (int i = 0; i < size; ++i) {
    printf("%ld ", fact_array[i]);
  }
  free(fact_array); // remember to deallocate the memory

  return 0;
}