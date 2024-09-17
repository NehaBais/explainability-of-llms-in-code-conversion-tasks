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
