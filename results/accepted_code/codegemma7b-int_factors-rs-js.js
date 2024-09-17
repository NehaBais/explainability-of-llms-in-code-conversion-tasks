function factor(num) {
  const factors = [];

  for (let i = 1; i <= Math.sqrt(num); i++) {
    if (num % i === 0) {
      factors.push(i);
      factors.push(num / i);
    }
  }

  factors.sort((a, b) => a - b);
  return factors;
}

console.assert(factor(100).length === 10);
console.assert(factor(101).length === 2);
