function GenerateFactors(n) {
  let factors = [1, n];
  for (let i = 2; i * i <= n; ++i) {
    if (n % i === 0) {
      factors.push(i);
      if (i * i !== n) factors.push(n / i);
    }
  }

  return factors.sort((a, B) => A - B);
}

const SampleNumbers = [3135, 45, 60, 81];

SampleNumbers.forEach((num) => {
  let factors = GenerateFactors(num);
  console.log(`Factors of ${num} are: ${factors.join(" ")}`);
});
