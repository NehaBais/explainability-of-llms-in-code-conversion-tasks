function printFactors(nr) {
  if (nr < 1) {
    console.log(`Factors of ${nr} not computed`);
    return;
  }

  const fs = [1];
  const apf = (p, e) => {
    for (let i = 0, pp = p; i < e; i++, pp *= p) {
      for (let j = 0; j < fs.length; j++) {
        fs.push(fs[j] * pp);
      }
    }
  };

  let e = 0;
  while (nr & (1 === 0)) {
    nr >>= 1;
    e++;
  }
  apf(2, e);

  for (let d = 3; d < nr; d += 2) {
    if (d * d > nr) break;
    for (e = 0; nr % d === 0; e++) {
      nr /= d;
    }
    if (e > 0) apf(d, e);
  }

  console.log(`Factors of ${nr}: `, fs);
  console.log(`Number of factors = ${fs.length}`);
}
