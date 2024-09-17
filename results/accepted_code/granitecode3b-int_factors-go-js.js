function printFactors(nr) {
  if (nr < 1) {
    console.log(`Factors of ${nr} not computed`);
    return;
  }
  console.log(`Factors of ${nr}: `);
  const fs = [];
  fs[0] = 1;
  function apf(p, e) {
    let n = fs.length;
    for (let i = 0, pp = p; i < e; i++, pp *= p) {
      for (let j = 0; j < n; j++) {
        fs.push(fs[j] * pp);
      }
    }
  }
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
