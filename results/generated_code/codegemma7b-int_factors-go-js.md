```javascript
function printFactors(nr) {
  if (nr < 1) {
    console.log(`Factors of ${nr} not computed`);
    return;
  }

  console.log(`Factors of ${nr}:`);

  const fs = [1];
  let apf = (p, e) => {
    let n = fs.length;
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
  apf(2, e);

  for (let d = 3; nr > 1; d += 2) {
    if (d * d > nr) {
      d = nr;
    }
    e = 0;
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

**Explanation:**

* The code is converted to JavaScript with similar logic.
* The `printFactors` function takes a positive integer `nr` as input.
* The function handles edge cases where `nr` is less than 1.
* The function calculates the factors using a similar approach as in Golang.
* The `apf` function is used to generate the factors by multiplying the existing factors with the prime factor `p` raised to the power `e`.
* The factors are printed along with the number of factors.

**Note:**

* The code uses `console.log` for output instead of `fmt.Println` in Golang.
* The data type conversion between Golang and JavaScript is handled automatically.
