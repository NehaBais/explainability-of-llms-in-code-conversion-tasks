function printFactors(nr) {
  if (nr < 1) {
    console.log("Factors of", nr, "not computed");
    return;
  }
  console.log(`Factors of ${nr}:`);
  let fs = [1];
  const apf = (p, e) => {
    let n = fs.length;
    for (let i = 0, pp = p; i < e; i++, pp *= p) {
      for (let j = 0; j < n; j++) {
        fs.push(fs[j] * pp);
      }
    }
  };
  let e = 0;
  while (nr % 2 === 0) {
    nr /= 2;
    e++;
  }
  apf(2, e);
  for (let d = 3; nr > 1; d += 2) {
    if (d * d > nr) {
      d = nr;
    }
    let tempNr = nr;
    for (e = 0; tempNr % d === 0; e++) {
      tempNr /= d;
    }
    if (e > 0) {
      apf(d, e);
    }
  }
  console.log(fs);
  console.log("Number of factors =", fs.length);
}

// Test cases
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
