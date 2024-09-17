let a = prompt("Enter first integer");
let b = prompt("Enter second integer");

a = parseInt(a);
b = parseInt(b);

let sum = a + b; // The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
let difference = a - b; // The result of subtracting 'b' from 'a'
let product = a * b; // The result of multiplying 'a' and 'b'
let quotient = Math.trunc(a / b); // The result of dividing 'a' by 'b', truncates towards zero
let remainder = a % b; // The remainder of dividing 'a' by 'b'. Same sign as first operand.

console.log("a + b = " + sum);
console.log("a - b = " + difference);
console.log("a * b = " + product);
console.log("quotient of a / b = " + quotient); // truncates towards zero
console.log("remainder of a / b = " + remainder); // same sign as first operand
