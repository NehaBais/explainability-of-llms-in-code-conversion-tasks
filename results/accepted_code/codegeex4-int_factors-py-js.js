function factor(n) {
  let factors = [];
  for (let x = 1; x <= Math.floor(Math.sqrt(n)); x++) {
    if (n % x === 0) {
      factors.push(x);
      factors.unshift(n / x);
    }
  }
  return factors;
}

console.log(factor(45).join(", "));
console.log(factor(53).join(", "));
console.log(factor(64).join(", "));
