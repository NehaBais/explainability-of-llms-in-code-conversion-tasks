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

function printFactors(nr) {
  if (nr < 1) {
    console.log("\nFactors of " + nr + " not computed");
    return;
  }
  console.log("Factors of " + nr + ": ");
  var fs = [1];
  var apf = function (p, e) {
    for (var i = 0, pp = p; i < e; i++, pp *= p) {
      for (var j = 0; j < fs.length; j++) {
        fs.push(fs[j] * pp);
      }
    }
  };
  var e = 0;
  while (nr % 2 == 0) {
    e++;
    nr >>= 1;
  }
  apf(2, e);
  for (var d = 3; nr > 1; d += 2) {
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
  }
  console.log(fs);
  console.log("Number of factors = " + fs.length);
}
