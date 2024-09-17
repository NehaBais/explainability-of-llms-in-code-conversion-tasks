function factor(num) {
  let factors = []; // creates an empty array to store the factors
  for (let i = 1; i <= Math.sqrt(num); i++) {
    // loops through all possible factors from 1 to the square root of the number
    if (num % i === 0) {
      // checks if the current factor is a factor of the number
      factors.push(i); // adds the factor to the array
      factors.push(num / i); // adds the quotient of the number and the factor to the array
    }
  }
  factors.sort((a, b) => a - b); // sorts the factors in ascending order
  return factors; // returns the factors
}
