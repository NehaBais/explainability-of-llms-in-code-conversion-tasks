function generateFactors(n) {
  var factors = [1, n];
  for (var i = 2; i * i <= n; ++i) {
    if (n % i === 0) {
      factors.push(i);
      if (i * i !== n) factors.push(Math.floor(n / i));
    }
  }
  return factors.sort((a, b) => a - b);
}

const sampleNumbers = [3135, 45, 60, 81];

for (let i = 0; i < sampleNumbers.length; ++i) {
  let factors = generateFactors(sampleNumbers[i]);
  console.log("Factors of " + sampleNumbers[i] + " are: ", factors.join(" "));
}

// In NodeJS, process ends with exit code 0 on success
process.exit(0);
