let a = Number(prompt("Enter the first integer:"));
let b = Number(prompt("Enter the second integer:"));

console.log("a+b = " + (a + b));
console.log("a-b = " + (a - b));
console.log("a*b = " + a * b);
// In JavaScript, division rounds towards 0 by default unlike C++, so no specific indication for quotient rounding is necessary.
let q = Math.floor(a / b); // Quotient rounded towards zero if a and b are integers.
console.log("a/b = " + q + ", remainder " + (a % b));
// As per the problem statement, we indicate whether the remainder's sign matches the first or second operand.
let r = a % b; // Remainder of division by zero is undefined in C++ but not in JavaScript. Hence error handling has been omitted here.
console.log("Remainder sign: " + (r >= 0 ? "same as a" : "opposite to a"));
// As per the problem statement, we assume that operator ** exists and is used for exponentiation like C++.
console.log("a**b = " + Math.pow(a, b)); // Exponentiation in JavaScript
