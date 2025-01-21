const readlineSync = require("readline-sync");
let inputA = readlineSync.questionInt("Please enter the first integer: ");
let inputB = readlineSync.questionInt("Please enter the second integer: ");

console.log(`a+b = ${inputA + inputB}`);
console.log(`a-b = ${inputA - inputB}`);
console.log(`a*b = ${inputA * inputB}`);
console.log(`a/b = Math.trunc(inputA / inputB)`);
console.log(
  `a%b = ${Math.abs(inputA % inputB) === inputA ? "positive" : "negative"}`,
);
