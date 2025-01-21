functionFactors(num) {
  let factors = [];
  for (let i = 1; i <= Math.sqrt(num); i++) {
    if (num % i === 0) {
      factors.push(i);
      factors.push(Math.floor(num / i));
    }
  }
  return factors;
}