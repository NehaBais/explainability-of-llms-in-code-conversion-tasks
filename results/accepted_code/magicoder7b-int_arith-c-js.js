console.log(
  "Please enter two integers to calculate their sum, difference, product, quotient and remainder",
);
process.stdin.resume();
process.stdin.setEncoding("utf-8");
let a = parseInt(process.stdin.read());
let b = parseInt(process.stdin.read());
console.log(`Sum: ${a + b}`);
console.log(`Difference: ${a - b}`);
console.log(`Product: ${a * b}`);
if (b !== 0) {
  console.log(`Quotient (truncated towards zero): ${Math.floor(a / b)}`);
} else {
  console.log("Error: Division by zero");
}
console.log(`Remainder (same sign as first operand): ${a % b}`);
