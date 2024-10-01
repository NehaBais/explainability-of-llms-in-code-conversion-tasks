function factors(n) {
  var factors = new Set(); // Using Set to automatically remove duplicates and maintain sorted order.
  factors.add(n);
  factors.add(1);

  for (let test = n - 1; test >= Math.sqrt(n); test--) {
    if (n % test == 0) {
      factors.add(test);
      factors.add(n / test);
    }
  }

  return Array.from(factors); // Convert set to array because we can't directly return a Set in JS.
}
