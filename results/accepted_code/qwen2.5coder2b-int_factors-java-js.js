function factors(n) {
  const factors = new Map();

  for (let i = 1; i <= Math.sqrt(n); i++) {
    if (n % i === 0) {
      factors.set(i, n / i);
      factors.set(n / i, i); // This line is redundant as the factor pair would be added twice but it doesn't affect the result.
    }
  }

  return Array.from(factors.keys()).sort((a, b) => a - b);
}
