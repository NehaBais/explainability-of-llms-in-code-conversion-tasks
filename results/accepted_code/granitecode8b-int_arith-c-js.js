const args = process.argv.slice(2);
if (args.length < 2) {
  console.error("Usage: node script.js num1 num2");
  process.exit(1);
}
const [num1, num2] = args.map(Number);
if (num2 === 0) {
  console.error("Division by zero is not allowed");
  process.exit(2);
}
const sum = num1 + num2;
const difference = num1 - num2;
const product = num1 * num2;
const quotient = Math.trunc(num1 / num2); // Rounds towards 0
const remainder = num1 % num2; // Same sign as num1
const exponentiation = Math.pow(num1, num2); // If num2 is an integer, returns the result of num1 raised to the power of num2
console.log(`a+b = ${sum}`);
console.log(`a-b = ${difference}`);
console.log(`a*b = ${product}`);
console.log(`a/b = ${quotient}`);
console.log(`a%%b = ${remainder}`);
console.log(`a^b = ${exponentiation}`);
