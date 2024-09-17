function main() {
  assert.equal(factor(100), [1, 2, 4, 5, 10, 20, 25, 50, 100]);
  assert.equal(factor(101), [1, 101]);
}

function factor(num) {
  let factors = []; // create a new array for the factors of the number

  for (let i = 1; i <= Math.sqrt(num); i++) {
    if (num % i === 0) {
      factors.push(i); // pushes smallest factor to factors
      factors.push(num / i); // pushes largest factor to factors
    }
  }

  return factors; // returns the factors
}
