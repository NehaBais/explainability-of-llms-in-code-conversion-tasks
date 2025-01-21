function factor(n) {
  const factors1 = [];
  const factors2 = [];

  for (let x = 1; x * x <= n; x++) {
    if (n % x === 0) {
      factors1.push(x);
      if (x !== n / x) {
        factors2.push(n / x);
      }
    }
  }

  // If n is a perfect square, add the square root once
  const sqrtN = Math.sqrt(n);
  if (Number.isInteger(sqrtN)) {
    factors1.push(sqrtN);
  }

  // Combine and return the factors in ascending order
  factors1.push(...factors2.reverse());
  return factors1;
}

const numbers = [45, 53, 64];
numbers.forEach((i) => {
  console.log(`${i}: factors: ${factor(i).join(", ")}`);
});
