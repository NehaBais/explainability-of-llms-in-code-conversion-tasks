const prompt = require("prompt-sync")();

const a = parseInt(prompt("Enter first integer: "));
const b = parseInt(prompt("Enter second integer: "));

const sum = a + b;
const difference = a - b;
const product = a * b;
const division = Math.floor(a / b); // truncates towards 0
const remainder = a % b; // same sign as first operand

console.log(`a + b = ${sum}`);
console.log(`a - b = ${difference}`);
console.log(`a * b = ${product}`);
console.log(`quotient of a / b = ${division}`);
console.log(`remainder of a / b = ${remainder}`);
