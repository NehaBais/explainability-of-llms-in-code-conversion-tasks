
Here's the code converted from Python to JavaScript:

```
 function factor(n) {
    let factors1 = [];
    let factors2 = [];
    for (let x = 1; x < Math.sqrt(n); x++) {
      if (n % x == 0) {
        factors1.push(x);
        factors2.push(n / x);
      }
    }
    x += 1;
    if (x * x == n) {
      factors1.push(x);
    }
    factors1 = factors1.concat(factors2.reverse());
    return factors1;
  }
  
  for (let i of [45, 53, 64]) {
    console.log(`${i}: factors: ${factor(i)}`);
  }
```
