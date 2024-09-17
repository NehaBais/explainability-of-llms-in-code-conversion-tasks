```javascript
let a = parseInt(prompt("Enter the first number: "));
let b = parseInt(prompt("Enter the second number: "));

let sum = a + b;        // The result of adding 'a' and 'b'
let difference = a - b; // The result of subtracting 'b' from 'a'
let product = a * b;    // The result of multiplying 'a' and 'b'
let division = Math.floor(a / b);   // The integer quotient of dividing 'a' by 'b', truncates towards 0
let remainder = a % b;  // The remainder of dividing 'a' by 'b'

console.log("a + b = " + sum);
console.log("a - b = " + difference);
console.log("a * b = " + product);
console.log("quotient of a / b = " + division);   // truncates towards 0
console.log("remainder of a / b = " + remainder);   // same sign as first operand

// exponentiation (if the operator exists)
let exponentiation = Math.pow(a, b);
console.log("a ^ b = " + exponentiation);
```
