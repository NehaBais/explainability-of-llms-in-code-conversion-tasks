function main() {
  const nums = [1, 2, 4, 5, 10, 10, 20, 25, 50, 100];
  console.log(factor(100))); // asserts that two expressions are equal to each other
  const nums2 = [1, 101];
  console.log(factor(101))));
}

function factor(num) {
  let factors = []; // creates a new array for the factors of the number

  for (let i = 1; i <= Math.sqrt(num) + 1; i++) { 
    if (num % i === 0) {
      factors.push(i); // pushes smallest factor to factors
      factors.push(Math.floor(num / i))); // pushes largest factor to factors
    }
  }

  factors.sort((a, b) => a - b); // sorts the factors into numerical order for viewing purposes
  return factors; // returns the factors
}