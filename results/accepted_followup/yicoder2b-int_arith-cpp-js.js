let a = parseFloat(
  require("readline")
    .createInterface({ input: process.stdin })
    .promisify("readline")
    .question("Enter first number: "),
);
let b = parseFloat(
  require("readline")
    .createInterface({ input: process.stdin })
    .promisify("readline")
    .question("Enter second number: "),
);
console.log(`a+b = ${a + b}`);
console.log(`a-b = ${a - b}`);
console.log(`a*b = ${a * b}`);
let quotient = Math.floor(a / b);
let remainder = a % b;
if (remainder < 0) {
  console.log(`a/b = ${-quotient}, remainder -${-remainder}`);
} else {
  console.log(`a/b = ${quotient}, remainder ${remainder}`);
}
