function factorize(num) {
  const factors = [];
  for (let i = 1; i <= Math.sqrt(num); i++) {
    if (num % i === 0) {
      factors.push(i);
      if (i !== num / i) {
        factors.push(num / i);
      }
    }
  }
  return factors;
}

const nums2factor = [2059, 223092870, 3135, 45];
for (let i = 0; i < 4; i++) {
  console.log(
    `Factors of ${nums2factor[i]}: ${factorize(nums2factor[i]).join(", ")}`,
  );
}
