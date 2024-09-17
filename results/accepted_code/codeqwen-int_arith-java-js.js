let A = parseInt(prompt("Enter the first integer"));
let B = parseInt(prompt("Enter the second integer"));

let sum = A + B; // The result of adding 'A' and 'B' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
let difference = A - B; // The result of subtracting 'B' from 'A'
let product = A * B; // The result of multiplying 'A' and 'B'
let quotient = Math.floor(A / B); // The integer quotient (Note: 'quotient' does not contain the fractional result)
let remainder = A % B; // The remainder of dividing 'A' by 'B'

console.log("A + B = " + sum);
console.log("A - B = " + difference);
console.log("A * B = " + product);
console.log("quotient of a / b = " + quotient); // Math.floor() rounds down to nearest integer
console.log("remainder of a / b = " + remainder);
