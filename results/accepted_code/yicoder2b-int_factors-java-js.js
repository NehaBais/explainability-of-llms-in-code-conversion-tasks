function factors(n) {
  var factors = [];
  factors.push(1, n);
  for (var test = n - 1; test >= Math.sqrt(n); test--)
    if (n % test == 0) {
      factors.push(test);
      factors.push(n / test);
    }
  return factors.sort((a, b) => a - b); // sort the array in ascending order
}
