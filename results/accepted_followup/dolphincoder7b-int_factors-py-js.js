function factor(n) {
  let factors1 = [];
  let factors2 = [];

  for (let x = 1; x <= Math.sqrt(n); x++) {
    if (n % x === 0) {
      factors1.push(x);
      factors2.push(n / x);
    }
  }

  const x = Math.sqrt(n);
  if (Math.pow(x, 2) === n) {
    factors1.push(x);
  }

  // reverse factors2 and append all elements of factors2 to the end of factors1
  return [...factors1, ...factors2.reverse()];
}
