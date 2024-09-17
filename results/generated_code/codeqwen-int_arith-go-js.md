Here is the equivalent JavaScript code:

```javascript
const readlineSync = require('readline-sync');

let A = parseInt(readlineSync.question("Enter the first integer: "));
let B = parseInt(readlineSync.question("Enter the second integer: "));

console.log(`${A} + ${B} = ${A + B}`);
console.log(`${A} - ${B} = ${A - B}`);
console.log(`${A} * ${B} = ${A * B}`);
console.log(`${A} / ${B} = ${Math.floor(A / B)} (truncates towards 0)`);
console.log(`${A} % ${B} = ${A % B} (same sign as the first operand)`);

let exponentiationResult;
try {
  exponentiationResult = Math.pow(A, B);
  console.log(`${A} ^ ${B} = ${exponentiationResult}`);
} catch (error) {
  console.error('An error occurred: ', error);
}
```

The JavaScript code is very similar to the Go code provided, but there are a few differences. The `readline-sync` package is used instead of the built-in `fmt` and `scanner` packages in Golang. Additionally, the exponentiation operator (`^`) does not exist in JavaScript, so I added a try/catch block to handle it.
