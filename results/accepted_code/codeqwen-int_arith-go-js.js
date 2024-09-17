const readlineSync = require("readline-sync");

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
  console.error("An error occurred: ", error);
}
