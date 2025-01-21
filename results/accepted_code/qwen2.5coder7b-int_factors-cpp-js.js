function generateFactors(n) {
  var factors = [1, n];
  for (var i = 2; i * i <= n; ++i) {
    if (n % i === 0) {
      factors.push(i);
      if (i * i !== n) factors.push(n / i);
    }
  }

  factors.sort((a, b) => a - b);
  return factors;
}

var sampleNumbers = [3135, 45, 60, 81];

for (var i = 0; i < sampleNumbers.length; ++i) {
  var factors = generateFactors(sampleNumbers[i]);
  console.log(
    "Factors of " +
      String(sampleNumbers[i]).padStart(4, " ") +
      " are: " +
      factors.join(" "),
  );
}
