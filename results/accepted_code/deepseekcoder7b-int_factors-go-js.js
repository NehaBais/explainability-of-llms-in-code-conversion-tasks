function printFactors(nr) {
  if (nr < 1) {
    console.log("Factors of " + nr + " not computed");
    return;
  }
  console.log("Factors of " + nr + ": ");
  var fs = [1];
  var apf = function (p, e) {
    var n = fs.length;
    for (var i = 0, pp = p; i < e; i++, pp *= p) {
      for (var j = 0; j < n; j++) {
        fs.push(fs[j] * pp);
      }
    }
  };
  var e = 0;
  while (nr % 2 === 0) {
    nr >>= 1;
    e++;
  }
  apf(2, e);
  for (var d = 3; nr > 1; d += 2) {
    if (d * d > nr) {
      d = nr;
    }
    var e = 0;
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
printFactors(-1);
printFactors(0);
printFactors(1);
printFactors(2);
printFactors(3);
printFactors(53);
printFactors(45);
printFactors(64);
printFactors(600851475143); //This number has factors: [1, 2, 4, 715827882, 4630532951] and it's length is 5.
printFactors(999999999999999989); //This number has factors: [1], which means it doesn't have other factors except itself (1).
