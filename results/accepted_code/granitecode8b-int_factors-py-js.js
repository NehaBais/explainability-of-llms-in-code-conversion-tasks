function factor(n) {
  let factors = [];
  for (let x = 1; x <= Math.sqrt(n); x++) {
    if (n % x == 0) {
      factors.push(x);
      factors.push(Math.floor(n / x));
    }
  }
  if (Math.pow(Math.round(Math.sqrt(n)), 2) == n) {
    factors.push(Math.round(Math.sqrt(n)));
  }
  return factors;
}
console.log("45: factors: " + factor(45).toString());
console.log("53: factors: " + factor(53).toString());
console.log("64: factors: " + factor(64).toString());
