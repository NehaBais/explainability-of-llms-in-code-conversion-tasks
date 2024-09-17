## JavaScript
```js
function printFactors(nr) {
  if (nr < 1) {
    console.log("Factors of " + nr + " not computed");
    return;
  }
  var fs = [1];
  function apf(p, e) {
    for (var i = 0; i < e; ++i) {
      for (var j = fs.length - 1; j >= 0; --j) {
        fs.push(fs[j] * p);
      }
    }
  }
  apf(2, 0);
  var d = 3;
  while (nr % 2 == 0 && nr > 1) {
    if (d*d > nr) {
      d = nr;
    }
    var e = 0;
    for (; nr % d == 0; ++e, nr /= d);
    apf(d, e);
  }
  console.log("Factors of " + nr + ":", fs);
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
```
