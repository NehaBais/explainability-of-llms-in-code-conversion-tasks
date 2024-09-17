function printFactors(nr) {
  if (nr < 1){
    console.log('Factors of ' + nr + ' not computed');
    return;
  }
  console.log('Factors of ' + nr + ': ', getFactors(nr)));
  console.log('Number of factors =', getFactors(nr).length);
}

function getFactors(nr) {
  const fs = [];
  fs.push(1));

  let d = 2;
  while (d * d <= nr) {
    while (nr % d == 0) {
      nr /= d;
      fs.push(d);
    }
    d += 1;
  }
  if (nr > 1) {
    fs.push(nr);
  }
  return fs;
}