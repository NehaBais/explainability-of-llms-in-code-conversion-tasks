Here is the equivalent JavaScript code for your requirements. Note that the `unwrap` function you used in Rust has no direct equivalent in JS, so error handling is not included here.

```javascript
let a = parseInt(process.argv[2]));
let b = parseInt(process.argv[3]));

console.log("sum: " + (a + b)));
console.log("difference: " + (a - b)));
console.log("product: " + (a * b)));
console.log("integer quotient: " + Math.trunc((a / b)))))); // truncates towards zero
console.log("remainder: " + ((a % b) * ((a < 0) ? -1 : 1))))); // same sign as first operand
```
This JavaScript code will parse the two integer inputs from command line arguments and perform all necessary arithmetic operations, printing out the results.
