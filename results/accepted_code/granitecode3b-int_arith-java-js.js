// Get the two numbers from the user
let a = parseInt(prompt("Enter the first number"));
let b = parseInt(prompt("Enter the second number"));

// Calculate and display the sum, difference, product, quotient, remainder, and exponentiation (if the operator exists)
let sum = a + b; // The result of adding 'a' and 'b'
let difference = a - b; // The result of subtracting 'b' from 'a'
let product = a * b; // The result of multiplying 'a' and 'b'
let division = Math.floor(a / b); // The result of dividing 'a' by 'b', rounded down (i.e., towards zero)
let remainder = a % b; // The remainder of dividing 'a' by 'b'

console.log("a + b = " + sum);
console.log("a - b = " + difference);
console.log("a * b = " + product);
console.log("quotient of a / b = " + division); // rounded down
console.log("remainder of a / b = " + remainder); // positive if both operands have the same sign, negative if they have different signs
