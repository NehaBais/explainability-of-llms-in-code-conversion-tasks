function factor(num) {
  const factors = [];
  let divisor = 2;

  while (divisor * divisor <= num) {
    while (num % divisor === 0) {
      factors.push(divisor);
      num /= divisor;
    }
    divisor++;
  }

  if (num > 1) {
    factors.push(num);
  }

  return factors;
}

const nums2factor = [2059, 223092870, 3135, 45];

for (const num of nums2factor) {
  const factors = factor(num);
  console.log(`Factors of ${num} are:`, factors.join(","));
}
