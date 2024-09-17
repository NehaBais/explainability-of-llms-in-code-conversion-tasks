function factor(n) {
  var factors1 = [];
  var factors2 = [];
  for (let x = 1; x <= Math.floor(Math.sqrt(n)); x++) {
    if (n % x === 0) {
      factors1.push(x);
      factors2.push(n / x);
    }
  }

  var max = factors2[factors2.length - 1];
  for (let i = factors1.length - 1; i >= 0; i--) {
    if (factors1[i] !== max) factors1.push(n / factors1[i]);
  }
  return factors1;
}

for (var i of [45, 53, 64]) {
  console.log(i + ": factors: " + factor(i).join());
}
