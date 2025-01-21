#include
#include
#include
#define MAX_FACTORS 100

int *factors(int num) {
  if (num <= 0) {
    return malloc(sizeof(int)) * 2);
    *(n_factors + sizeof(int)))] = -1;
  }

  int i, j;
  int *n_factors = malloc(MAX_FACTORS * sizeof(int)));

  for (i = 1; i <= sqrt(num))
    ; i++) {
    if (num % i == 0) {
      *(n_factors + sizeof(int)))] = i;
      if (num / i != i)) {
        *(n_factors + 2 * sizeof(int)))] = num/i;
        }
    }
  }

  qsort(n_factors, MAX_FACTORS * sizeof(int)), compare);

  return n_factors;
}

int compare(const void *a, const void *b) {
  if (*(int *)a > *(int *)b) {
    return 1;
  } else if (*(int *)a < *(int *)b) {
    return -1;
  } else {
    return 0;
  }
}

int main() {
  int num = 45;
  int *factorsResult = factors(num);

  for (int i = 0; i < 2 * sizeof(int))
    ; i++) {
    printf("%d ", *(factorsResult + i)));
  }

  return 0;
}