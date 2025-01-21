function printFactors(nr) {
  if (nr < 1) {
    console.log(`Factors of ${nr} not computed`);
    return;
  }
  console.log(`Factors of ${nr}: `);
  let factors = [1];

  function apf(p, e) {
    let n = factors.length;
    for (let i = 0, pp = p; i < e; i++, pp *= p) {
      for (let j = 0; j < n; j++) {
        factors.push(factors[j] * pp);
      }
    }
  }

  let e = 0;
  while (nr & (1 === 0)) {
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

    if (e > 0) apf(d, e);
  }

  console.log(factors);
  console.log("Number of factors =", factors.length);
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
// printFactors(999999999999999989); // Uncomment to run this big number
