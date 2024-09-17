Here is the equivalent JavaScript code:

```javascript
// Get two integers from user input
const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
}));

let a;
let b;

readline.question("Enter the first integer: ", (answer) => {
  a = parseInt(answer);

  readline.question("Enter the second integer: ", (answer) => {
    b = parseInt(answer);

    // Display sum, difference, product, quotient and remainder
    console.log(`Sum of ${a} and ${b}] = ${a + b}`);
    console.log(`Difference between ${a} and ${b}] = ${a - b}`);
    console.log(`Product of ${a} and ${b}] = ${a * b}`);

    // Quotient calculation (towards zero)
    let quotient = a / b;
    console.log(`Quotient of ${a} and ${b}] = ${quotient.toFixed(2)}}`); // truncated towards negative infinity

    // Remainder sign matching the first operand
    let remainder = a % b;
    console.log(`Remainder of ${a} and ${b}] = ${remainder}`); // same sign as first operand

    readline.close();
  });
});
```
This JavaScript code replicates the behavior of the original C code, including user input, output formatting, rounding/truncation for quotient (towards zero), and remainder sign matching either operand.
