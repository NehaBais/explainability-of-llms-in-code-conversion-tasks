function generateFactors(n) {
  let factors = [1, n];

  for (let i = 2; i * i <= n; i++) {
    if (n % i === 0) {
      factors.push(i);
      if (i * i !== n) factors.push(n / i);
    }
  }

  return factors.sort((a, b) => a - b);
}

const sampleNumbers = [3135, 45, 60, 81];

sampleNumbers.forEach((num) => {
  const factors = generateFactors(num);
  console.log(`Factors of ${num} are: ${factors.join(" ")}`);
});
