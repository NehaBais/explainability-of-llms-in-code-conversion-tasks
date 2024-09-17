const readlineSync = require("readline-sync");

console.log("Enter two integers:");
var a = parseInt(readlineSync.question("First integer: "));
var b = parseInt(readlineSync.question("Second integer: "));

console.log(`${a} + ${b} = ${a + b}`);
console.log(`${a} - ${b} = ${a - b}`);
console.log(`${a} * ${b} = ${a * b}`);
console.log(`${a} / ${b} = ${Math.trunc(a / b)}`); // truncates towards 0
console.log(`${a} % ${b} = ${a % b}`); // same sign as first operand

// No exponentiation operator in JavaScript
