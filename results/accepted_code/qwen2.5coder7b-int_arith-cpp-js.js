let readlineSync = require("readline-sync");

let a = parseInt(readlineSync.question("Enter first number: "));
let b = parseInt(readlineSync.question("Enter second number: "));

console.log(`a + b = ${a + b}`);
console.log(`a - b = ${a - b}`);
console.log(`a * b = ${a * b}`);

// For exponentiation
console.log(`a ^ b = ${Math.pow(a, b)}`);

if (b > 0) {
  console.log(`a / b = ${Math.floor(a / b)}, remainder ${a % b}`);
} else if (b < 0 && a < 0) {
  console.log(`a / b = ${Math.floor(a / b)}, remainder ${a % b}`);
} else {
  console.log(`a / b = ${Math.trunc(a / b)}, remainder ${a % b}`);
}
