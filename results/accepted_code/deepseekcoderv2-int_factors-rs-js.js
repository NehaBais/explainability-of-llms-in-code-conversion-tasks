function main() {
  console.assert(
    JSON.stringify(factor(100)) ===
      JSON.stringify([1, 2, 4, 5, 10, 10, 20, 25, 50, 100]),
    "Test for 100 failed",
  );
  console.assert(
    JSON.stringify(factor(101)) === JSON.stringify([1, 101]),
    "Test for 101 failed",
  );
}

function factor(num) {
  let factors = []; // creates a new array for the factors of the number

  for (let i = 1; i <= Math.sqrt(num); i++) {
    if (num % i === 0) {
      factors.push(i); // pushes smallest factor to factors
      if (i !== num / i) {
        // Avoid adding the square root twice for perfect squares
        factors.push(num / i); // pushes largest factor to factors
      }
    }
  }
  factors.sort((a, b) => a - b); // sorts the factors into numerical order for viewing purposes
  return factors; // returns the factors
}

// Run the main function to perform the tests
main();
