function generateFactors(n) {
  var factors = [1, n];
  for (var i = 2; i * i <= n; ++i) {
    if (n % i === 0) {
      factors.push(i);
      if (i * i !== n) factors.push(n / i);
    }
  }
  return factors.sort((a, b) => a - b);
}

var sampleNumbers = [3135, 45, 60, 81];
for (var i = 0; i < sampleNumbers.length; ++i) {
  console.log(
    "Factors of " +
      sampleNumbers[i] +
      " are: " +
      generateFactors(sampleNumbers[i]).join(" "),
  );
}
