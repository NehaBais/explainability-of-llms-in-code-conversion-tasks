let a = parseInt(prompt("Enter the first integer: "));
let b = parseInt(prompt("Enter the second integer: "));

console.log(a + " + " + b + " = " + (a + b));
console.log(a + " - " + b + " = " + (a - b));
console.log(a + " * " + b + " = " + a * b);
console.log(a + " / " + b + " = " + Math.trunc(a / b)); // truncates towards 0
console.log(a + " % " + b + " = " + (a % b)); // same sign as first operand
// no exponentiation operator
