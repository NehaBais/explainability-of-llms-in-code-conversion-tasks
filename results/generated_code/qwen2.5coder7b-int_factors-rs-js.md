Here is your code converted from Rust to JavaScript:

```javascript
function assertEqual(actual, expected) {
  if (JSON.stringify(actual) !== JSON.stringify(expected)) {
    throw new Error(`Expected ${JSON.stringify(expected)}, but got ${JSON.stringify(actual)}`);
  }
}

function factor(num) {
  let factors = [];

  for(let i = 1; i <= Math.sqrt(num); i++) { 
    if(num % i === 0) {
      factors.push(i);
      if (i !== num / i) { // prevent duplicates for perfect squares
        factors.push(num/i);
      }
    }
  }

  factors.sort((a, b) => a - b);

  return factors;
}

// Testing the function with given examples
assertEqual(factor(100), [1, 2, 4, 5, 10, 20, 25, 50, 100]);
assertEqual(factor(101), [1, 101]);
```
This JavaScript code does the same thing as your Rust code. It declares a `factor` function that finds all factors of a given integer and returns them in an array sorted in ascending order. The `assertEqual` function is used to check if the output of `factor` matches the expected result, similar to how `assert_eq!` works in Rust.
