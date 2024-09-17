Here's the JavaScript code that computes the factors of a positive integer:
```javascript
function factor(num) {
  let factors = []; // creates an empty array to store the factors
  for (let i = 1; i <= Math.sqrt(num); i++) { // loops through all possible factors from 1 to the square root of the number
    if (num % i === 0) { // checks if the current factor is a factor of the number
      factors.push(i); // adds the factor to the array
      factors.push(num/i); // adds the quotient of the number and the factor to the array
    }
  }
  factors.sort((a, b) => a - b); // sorts the factors in ascending order
  return factors; // returns the factors
}
```
The `factor` function takes an integer `num` as input and returns an array of integers that are the factors of `num`. It works by iterating through all possible factors from 1 to the square root of `num`, and checking if each factor is a divisor of `num`. If it is, it adds both the factor and its quotient (which is also a factor) to the array. Finally, it sorts the array in ascending order and returns it.
You can test this function with some sample inputs to verify that it works correctly:
```javascript
console.assert(factor(100).toString() == [1, 2, 4, 5, 10, 10, 20, 25, 50, 100].toString());
console.assert(factor(101).toString() == [1, 101].toString());
```

