function factor(n) {
  let factors1 = [];
  let factors2 = [];
  for (let x = 1; x <= Math.sqrt(n); x++) {
    if (n % x == 0) {
      factors1.push(x);
      factors2.push(Math.floor(n / x));
    }
  }
  let x = Math.ceil(Math.sqrt(n)) + 1;
  if (x * x === n) {
    factors1.push(x);
  }
  for (let i = factors2.length - 1; i >= 0; i--) {
    factors1.push(factors2[i]);
  }
  return factors1;
}

for (let i of [45, 53, 64]) {
  console.log(`${i}: factors: ${factor(i)}`);
}
