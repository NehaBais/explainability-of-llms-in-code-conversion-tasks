int cmpfunc(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

FactorVector generateFactors(int n) {
  FactorVector result = {0};
  int *factors = malloc(sizeof(int) * (n + 1));

  for (size_t i = 0; i <= n; ++i)
    factors[i] = 0;

  size_t len = 2;
  factors[0] = 1;
  factors[1] = n;

  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      factors[len++] = i;
      factors[len++] = n / i;
    }
  }

  // Sorting the array in ascending order
  qsort(factors, len, sizeof(int), cmpfunc);

  result.factors = factors;
  result.len = len;
  return result;
}