var a = parseInt(process.argv[2]);
var b = parseInt(process.argv[3]);

if (isNaN(a) || isNaN(b)) {
  console.error("Please provide two valid integers");
  process.exit(1);
}

if (b === 0) {
  console.error("Division by zero error!");
  process.exit(2);
}

console.log(`a+b = ${a + b}`);
console.log(`a-b = ${a - b}`);
console.log(`a*b = ${a * b}`);
console.log(`a/b = ${Math.trunc(a / b)}`); // Always truncates towards zero in JavaScript
console.log(`a%b = ${((a % b) + b) % b}`); // Same sign as first operand, but not same behaviour for negative numbers
console.log(`Math.pow(a, b) = ${Math.pow(a, b)}`);
