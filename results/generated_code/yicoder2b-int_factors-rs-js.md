The equivalent code in JavaScript would be:

```javascript
function main() {
  console.assert(JSON.stringify([1, 2, 4, 5, 10, 10, 20, 25, 50, 100]) == JSON.stringify(factorize(100))); // asserts that two expressions are equal to each other
  console.assert(JSON.stringify([1, 101]) == JSON.stringify(factorize(101)));
}

function factorize(num) {
  let factors = []; // creates a new array for the factors of the number
  for (let i = 1; i <= Math.sqrt(num) + 1; i++) {
    if (num % i === 0) {
      factors.push(i); // pushes smallest factor to factors
      factors.push(Math.floor(num / i)); // pushes largest factor to factors
    }
  }
  factors.sort((a, b) => a - b); // sorts the factors into numerical order for viewing purposes
  return factors; // returns the factors
}
```
This code does essentially the same thing as your Rust code. It calculates all the divisors of a given number and puts them in an array. Then it sorts this array and finally returns it.
