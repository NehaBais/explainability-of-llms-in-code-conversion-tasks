let a = parseInt(prompt("Enter first integer:"));
let b = parseInt(prompt("Enter second integer:"));

console.log(`${a} + ${b} = ${a + b}`);
console.log(`${a} - ${b} = ${a - b}`);
console.log(`${a} * ${b} = ${a * b}`);
console.log(`${a} / ${b} = ${Math.floor(a / b)} (truncates towards zero)`); // truncates towards zero
console.log(
  `${a} % ${b} = ${a % b === -(-a % b) ? a % b : (a < 0 && b > 0) || (a > 0 && b < 0) ? -(-a % b) : b % a} (same sign as first operand or of the second if they are different)`,
);
console.log(`${a} ** ${b} = ${Math.pow(a, b)}`); // exponentiation operator
