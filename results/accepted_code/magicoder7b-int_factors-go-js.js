function printFactors(nr) {
  if (nr < 1) {
    console.log("Factors of " + nr + " not computed");
    return;
  }
  console.log("Factors of " + nr + ": ");
  fs = [1];
  apf = function (p, e) {
    for (let j = 0; j < fs.length; j++) {
      fs[j] *= p;
    }
    for (let i = 0; i < e; i++) {
      fs.push(fs[j] * p);
    }
  };
  let e = 0;
  while (nr % 2 == 0) (nr >>= 1), e++;
  apf(2, e);
  for (let d = 3, e = 0; ; d += 2) {
    if (d * d > nr) {
      d = nr;
    }
    while (nr % d == 0) {
      nr /= d;
      e++;
    }
    if (e > 0) {
      apf(d, e);
    }
    if (nr <= 1) break;
  }
  console.log(fs);
  console.log("Number of factors = " + fs.length);
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
