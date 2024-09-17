### Solution 1:

```js
function main() {
    assert_eq([1,2,4,5,10,10,20,25,50,100], factor(100)); // asserts that two expressions are equal to each other
    assert_eq([1,101], factor(101));
}

function factor(num) {
  let factors = [];
  
  for (let i = 1; i <= Math.sqrt(num); i++) { // iterates over all possible factors of the number up to its square root
    if (num % i === 0) { // checks if the current factor is a divisor of the number
      factors.push(i); // pushes smallest factor to factors
      factors.push(num/i); // pushes largest factor to factors
    }
  }
  
  factors.sort(); // sorts the factors into numerical order for viewing purposes
  return factors; // returns the factors
}
```
