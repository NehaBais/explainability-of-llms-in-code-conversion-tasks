Here is the JavaScript code that computes the factors of a positive integer:
```
function printFactors(nr) {
  if (nr < 1) {
    console.log(`Factors of ${nr} not computed`);
    return;
  }
  console.log(`Factors of ${nr}: `);
  let fs = [1];
  const appendProductFactor = (p, e) => {
    const n = fs.length;
    for (let i = 0, pp = p; i < e; i++, pp *= p) {
      for (let j = 0; j < n; j++) {
        fs.push(fs[j] * pp);
      }
    }
  };
  let e = 0;
  while (nr % 2 === 0) {
    nr >>= 1;
    e++;
  }
  appendProductFactor(2, e);
  for (let d = 3; nr > 1; d += 2) {
    if (d * d > nr) {
      d = nr;
    }
    let e = 0;
    while (nr % d === 0) {
      nr /= d;
      e++;
    }
    if (e > 0) {
      appendProductFactor(d, e);
    }
  }
  console.log(fs);
  console.log(`Number of factors = ${fs.length}`);
}
printFactors(-1);
printFactors(0);
printFactors(1);
printFactors(2);
printFactors(3);
printFactors(53);
printFactors(45);
printFactors(64);
printFactors(600851475143);
printFactors(999999999999999989);
```
The code first checks if the input number is less than 1 and prints a message accordingly. Then, it initializes an array `fs` with the factor 1. The function `appendProductFactor` is used to append the product of a prime number `p` raised to an exponent `e` to the array `fs`. It uses two nested loops to generate all possible combinations of products and appends them to `fs`. Finally, it prints the factors and the number of factors.

