Here is the converted code from C to JavaScript:
```
functionFactors(num) {
  let factors = [];
  for (let i = 1; i <= Math.sqrt(num); i++) {
    if (num % i === 0) {
      factors.push(i);
      factors.push(Math.floor(num / i));
    }
  }
  return factors;
}
```
This code computes the factors of a positive integer by iterating from 1 to the square root of the number and checking if it is a factor. If it is, then both the factor and its corresponding quotient are added to the list of factors. The function returns the list of factors as an array.

