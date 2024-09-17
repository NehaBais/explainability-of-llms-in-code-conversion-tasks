function factor(n) {
  const sqrt = Math.sqrt(n);
  const factors = [];
  for (let i = 1; i < sqrt; i++) {
    if (n % i === 0) {
      factors.push(i, n / i);
    }
  }
  if (sqrt * sqrt === n) {
    factors.push(sqrt);
  }
  return factors.reverse();
}
console.log(factor(45)); // [1, 3, 5, 9, 15]
console.log(factor(53)); // [1, 53]
console.log(factor(64)); // [1, 2, 4, 8, 16, 32, 64]
