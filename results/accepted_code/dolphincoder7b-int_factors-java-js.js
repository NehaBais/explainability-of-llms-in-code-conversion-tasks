function factors(n) {
  let factors = new Set();
  factors.add(n);
  factors.add(1);

  for (let test = n - 1; test >= Math.sqrt(n); test--) {
    if (n % test === 0) {
      factors.add(test);
      factors.add(n / test);
    }
  }

  return Array.from(factors).sort((a, b) => a - b);
}
