function getTwoNumbers() {
  const readlineSync = require("readline-sync");
  return (
    readlineSync.questionInt("Enter the first integer: "),
    readlineSync.questionInt("Enter the second integer: ")
  );
}

function performArithmeticOperations(a, b) {
  console.log(`a + b = ${a + b}`);
  console.log(`a - b = ${a - b}`);
  console.log(`a * b = ${a * b}`);
  console.log(`quotient of a / b = ${Math.trunc(a / b)} (truncated towards 0)`);
  console.log(
    `remainder of a / b = ${a % b} (same sign as first operand, if they are different)`,
  );
}

function main() {
  const [num1, num2] = getTwoNumbers();
  performArithmeticOperations(num1, num2);
}

main();
