The equivalent code in JavaScript would be as follows:

```javascript
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
```
This script first checks all the numbers up to the square root of n and checks if it is divisible by any of them. If it's not, then this number is a factor of n itself. It also keeps track of the other half of the factors (factors2) in reverse order as per the requirement. Then it combines these two arrays into one and removes any duplicate values using the Set object. The result of this combined array is what we call 'factors1'.
