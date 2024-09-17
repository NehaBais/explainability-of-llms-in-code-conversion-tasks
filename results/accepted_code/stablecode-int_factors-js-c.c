#include <math.h>
#include <stdio.h>

int *factors(int num) {
  int i;
    int *n_factors = malloc(sizeof(int)) * 2);

    for (i = 1; i <= sqrt(num))
      ; i++) {
      if (num % i == 0) {
            *(n_factors + sizeof(int))) = i;
            if ((num / i) != i)
                *(n_factors + 2 * sizeof(int))] = num/i;
      }
    }

    qsort(n_factors, 2 * sizeof(int)), compare);

    return n_factors;
}

int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

int main() {
  int num = 45;
  int *factorsResult = factors(num);

  for (int i = 0; i < 2 * sizeof(int))
    ; i++)
        printf("%d ", *(factorsResult + i)));

  return 0;
}