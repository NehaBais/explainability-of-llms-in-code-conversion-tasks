function assertEquals(expected, actual) {
  if (expected.toString() !== actual.toString()) {
    console.log(`Expected: ${expected}, but got: ${actual}`);
    throw new Error("Assertion failed");
  }
}

function factor(num) {
  let factors = []; // creates a new array for the factors of the number

  for (let i = 1; i <= Math.sqrt(num); i++) {
    if (num % i === 0) {
      factors.push(i); // pushes smallest factor to factors
      factors.push(num / i); // pushes largest factor to factors
    }
  }
  factors.sort((a, b) => a - b); // sorts the factors into numerical order for viewing purposes
  return factors; // returns the factors
}

assertEquals([1, 2, 4, 5, 10, 10, 20, 25, 50, 100], factor(100)); // asserts that two expressions are equal to each other
assertEquals([1, 101], factor(101));
