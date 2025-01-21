int factors(long n, int len, long factors[]) {
  // Add the original number to the list of factors
  factors[len++] = n;
  // Add 1 as a factor if it's not already included
  factors[len++] = 1L;

  for (long test = n - 1; test >= sqrt(n); test--) {
    if (n % test == 0) {
      factors[len++] = test;
      factors[len++] = n / test;
    }
  }
  return len;
}