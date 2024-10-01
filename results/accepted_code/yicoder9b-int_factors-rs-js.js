function factor(num) {
  let factors = [];

  for (let i = 1; i <= Math.floor(Math.sqrt(num)); i++) {
    if (num % i === 0) {
      factors.push(i);
      // Prevent duplicate factors by checking if the quotient is not already in the array
      if (!factors.includes(num / i)) {
        factors.push(num / i);
      }
    }
  }
  return factors.sort((a, b) => a - b); // sorts the factors into numerical order for viewing purposes
}
console.log(
  JSON.stringify(factor(100)) ===
    JSON.stringify([1, 2, 4, 5, 10, 10, 20, 25, 50, 100]),
); // asserts that two expressions are equal to each other
console.log(JSON.stringify(factor(101)) === JSON.stringify([1, 101]));
