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
