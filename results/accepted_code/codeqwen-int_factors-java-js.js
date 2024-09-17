function factors(n) {
  var factors = new Set();
  factors.add(n);
  factors.add(1);
  for (var test = n - 1; test >= Math.sqrt(n); test--) {
    if (n % test == 0) {
      factors.add(test);
      factors.add(n / test);
    }
  }
  return factors;
}
