Here is the converted code from Rust to JavaScript:
```
function main() {
 console.assert(JSON.stringify(factor(100)) == JSON.stringify([1, 2, 4, 5, 10, 10, 20, 25, 50, 100])); // asserts that two expressions are equal to each other
 console.assert(JSON.stringify(factor(101)) == JSON.stringify([1, 101]));
}
 
function factor(num) {
 const factors = []; // creates a new array for the factors of the number

 for (let i = 2; i <= Math.sqrt(num); i++) { 
 if (num % i === 0) {
 factors.push(i); // pushes smallest factor to factors
 factors.push(Math.round(num / i)); // pushes largest factor to factors
 }
 }

 return factors.sort((a, b) => a - b).filter((item, index) => factors.indexOf(item) === index); // sorts the factors into numerical order and removes duplicates
}
```
Note: The `factor` function in Rust returns an array of integers, while the `factor` function in JavaScript returns an array of numbers rounded to the nearest integer.

