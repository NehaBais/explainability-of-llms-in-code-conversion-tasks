function printFactors(nr) {
  if (nr < 1) {
    console.log(`\nFactors of ${nr} not computed`);
    return;
  }
  console.log(`\nFactors of ${nr}: `);
  let fs = [1];
  function apf(p, e) {
    for (let i = 0; i < e; i++) {
      let pp = p ** (i + 1);
      for (let j = 0; j < fs.length; j++) {
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
    let count = 0;
    while (nr % d === 0) {
      nr /= d;
      count++;
    }
    if (count > 0) {
      apf(d, count);
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
