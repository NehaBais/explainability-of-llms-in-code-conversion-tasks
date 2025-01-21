function factor(num) {
  let factors = [];
  for (let i = 1; i <= num / 2; i++) {
    if (num % i === 0) {
      factors.push(i);
      factors.push(num / i);
    }
  }
  factors.sort((a, b) => a - b);
  return factors;
}

console.log(factor(100)); // expected output: [1, 2, 4, 5, 10, 10, 20, 25, 50, 100]
console.log(factor(101)); // expected output: [1, 101]
