function factors(n) {
  const factors = new Set([n, 1]);
  for (let test = n - 1; test >= Math.sqrt(n); test--) {
    if (n % test === 0) {
      factors.add(test);
      factors.add(n / test);
    }
  }
  return Array.from(factors);
}
