
Here's the equivalent code in JavaScript:
```javascript
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
```
Note that in JavaScript, we use the `assert` function to write assertions instead of using the `assert_eq!` macro in Rust. Also, in JavaScript, we use `Math.sqrt()` function to compute the square root of a number instead of using the `f32` type in Rust.

Also, note that in JavaScript, we use the `push()` method to add elements to an array, while in Rust, we use the `push()` method to add elements to a vector.
