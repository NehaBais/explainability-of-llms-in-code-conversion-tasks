function factor(n) {
  let factors1 = [];
  let factors2 = [];
  for (let x = 1; x <= Math.sqrt(n); x++) {
    if (n % x === 0) {
      factors1.push(x);
      factors2.push(n / x);
    }
  }
  for (let x = factors2[0]; x * x === n; x--) {
    factors1.push(x);
  }
  return [...new Set([...factors1, ...factors2])];
}

const numbers = [45, 53, 64];
for (let i of numbers) {
  console.log(`${i}: factors: ${factor(i)}`);
}
