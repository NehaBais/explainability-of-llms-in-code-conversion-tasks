const a = parseInt(process.argv[2]);
const b = parseInt(process.argv[3]);

if (!b) {
  console.error("Error: Division by zero is not allowed.");
  process.exit(1);
}

console.log(`a+b = ${a + b}`);
console.log(`a-b = ${a - b}`);
console.log(`a*b = ${a * b}`);
console.log(`a/b = ${Math.floor(a / b)}`); // Truncates towards zero
console.log(`a%b = ${a % b}`); // Same sign as the first operand
