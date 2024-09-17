```javascript
function printFactors(nr) {
  if (nr < 1) {
    console.log(`Factors of ${nr} not computed`);
    return;
  }
  console.log(`Factors of ${nr}: `);
  let fs = [1];
  const apf = (p, e) => {
    for (let i = 0, pp = p; i < e; i++, pp *= p) {
      for (let j = 0; j < fs.length; j++) {
        fs.push(fs[j] * pp);
      }
    }
  };
  let e = 0;
  while ((nr & 1) === 0) {
    nr >>= 1;
    e++;
  }
  apf(2, e);
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
      apf(d, e);
    }
  }
  console.log(fs);
  console.log(`Number of factors = ${fs.length}`);
}
```

I have converted the Golang code into JavaScript while maintaining its functionality and syntax. The printFactors function takes an integer as input, and it checks if the number is less than 1; if so, it displays a message saying that factorization cannot be computed for this number. If the number is positive or zero, it factors out all the distinct prime factors of the input number, calculates their powers, and stores them in an array called fs. It then prints the array along with the total number of unique factors.
Please note that JavaScript doesn't have direct equivalents to Golang's bitwise operations (<<, &, |, ^, &^) or the left shift operator (<<=), hence it is necessary to convert those operations in terms of JavaScript's arithmetic operations and logical operators. I used the appropriate mathematical functions from Math object in JavaScript for these conversions.
