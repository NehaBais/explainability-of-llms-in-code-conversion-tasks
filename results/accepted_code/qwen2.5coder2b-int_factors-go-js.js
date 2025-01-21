function printFactors(nr) {
  if (nr < 1) {
    console.log(`Factors of ${nr} not computed`);
    return;
  }
  let fs = [1];
  let d = 2;

  while (nr > 1) {
    if (nr % d === 0) {
      while (nr % d === 0) {
        nr /= d;
      }
      fs.push(d);
    } else {
      d += 2;
    }
  }

  console.log(`Factors of ${nr}:`, fs);
  console.log(`Number of factors =`, fs.length);
}
