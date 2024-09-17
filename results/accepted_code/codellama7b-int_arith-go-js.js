"use strict";

let a;
let b;

// Prompt user to enter two integers
console.log("Enter two integers: ");
a = prompt();
b = prompt();

// Print the sum, difference, product, quotient, and remainder of the two numbers
console.log(a + " + " + b + " = " + (a + b));
console.log(a + " - " + b + " = " + (a - b));
console.log(a + " * " + b + " = " + a * b);
console.log(a + " / " + b + " = " + Math.trunc(a / b)); // Truncates towards 0
console.log(a + " % " + b + " = " + (a % b)); // Same sign as the first operand
