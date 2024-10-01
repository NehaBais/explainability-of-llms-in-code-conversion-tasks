function factor(n) {
  let factors1 = [];
  let factors2 = [];

  for (let x = 1, sqrt = Math.floor(Math.sqrt(n)); x <= sqrt; x++) {
    if (n % x === 0) {
      factors1.push(x);
      if (n / x !== x) factors2.push(n / x); // avoid duplicate factor for perfect squares
    }
  }

  factors1 = factors1.concat(factors2.reverse());
  return factors1;
}

for (let i of [45, 53, 64]) {
  console.log(`${i}: factors: ${factor(i)}`);
}
