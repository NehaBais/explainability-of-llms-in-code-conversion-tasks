Here's the JavaScript code that accomplishes the same task as the Python code you provided:
```javascript
// Prompt user for two integers
const input1 = parseInt(prompt("Enter the first integer"));
const input2 = parseInt(prompt("Enter the second integer"));
// Calculate sum, difference, product, quotient, remainder, and exponentiation
const sum = input1 + input2;
const difference = input1 - input2;
const product = input1 * input2;
const quotient = Math.floor(input1 / input2); // Round down to nearest integer
const remainder = input1 % input2; // Use modulo operator to get remainder
let exponentiation; // Use exponentiation operator to calculate exponentiation, but don't print it yet
if (input2 === 0) {
 exponentiation = "Cannot calculate exponentiation with a zero denominator";
} else {
 exponentiation = Math.pow(input1, input2);
}
// Display results
console.log("Sum: " + sum);
console.log("Difference: " + difference);
console.log("Product: " + product);
console.log("Quotient: " + quotient);
console.log("Remainder: " + remainder);
console.log("Exponentiation: " + exponentiation);
```
Note that this JavaScript code does not include error handling, and it will throw a `NaN` error if the user enters non-numeric values for the input. Additionally, the quotient is rounded down to the nearest integer using `Math.floor()`, which may not always be what you want in all cases. If you want to round up or any other rounding behavior, you can use `Math.ceil()`, `Math.round()`, or a custom function that rounds based on your needs.

