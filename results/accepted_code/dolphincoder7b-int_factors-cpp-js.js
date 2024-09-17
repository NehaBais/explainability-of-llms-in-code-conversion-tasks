const GenerateFactors = (n) => {
  const factors = [1, n];
  for (let i = 2; i * i <= n; ++i) {
    if (n % i === 0) {
      factors.push(i);
      if (i * i !== n) factors.push(n / i);
    }
  }

  return Array.from(new Set(factors)).sort((a, b) => a - b);
};

const SampleNumbers = [3135, 45, 60, 81];
for (let i = 0; i < SampleNumbers.length; ++i) {
  const factors = GenerateFactors(SampleNumbers[i]);
  console.log(`Factors of ${SampleNumbers[i]} are:`, factors);
}
