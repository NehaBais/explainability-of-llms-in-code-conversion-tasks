function generateFactors(n) {
  let factors = [1, n];
  for (let i = 2; i * i <= n; ++i) {
    if (n % i === 0) {
      factors.push(i);
      if (i * i !== n) {
        factors.push(n / i);
      }
    }
  }

  factors.sort((a, b) => a - b);
  return factors;
}

const sampleNumbers = [3135, 45, 60, 81];

for (let i = 0; i < sampleNumbers.length; ++i) {
  let factors = generateFactors(sampleNumbers[i]);
  process.stdout.write(
    `Factors of ${sampleNumbers[i].toString().padStart(4)} are: `,
  );
  console.log(factors.join(" "));
}
