```javascript
function factor(n) {
  const factors1 = [];
  const factors2 = [];

  for (let x = 1; x <= Math.sqrt(n); x++) {
    if (n % x === 0) {
      factors1.push(x);
      factors2.push(n / x);
    }
  }

  if (Math.pow(factors1[factors1.length - 1], 2) === n) {
    factors1.push(factors1[factors1.length - 1]);
  }

  factors1.push(...factors2.reverse());

  return factors1;
}

for (const i of [45, 53, 64]) {
  console.log(`${i}: factors: ${factor(i)}`);
}
```
