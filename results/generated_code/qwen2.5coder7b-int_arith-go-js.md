Here is the JavaScript equivalent of your Go code:

```javascript
let a = parseInt(prompt("Enter the first integer: "));
let b = parseInt(prompt("Enter the second integer: "));

console.log(a + " + " + b + " = " + (a + b));
console.log(a + " - " + b + " = " + (a - b));
console.log(a + " * " + b + " = " + (a * b));
console.log(a + " / " + b + " = " + Math.trunc(a / b));  // truncates towards 0
console.log(a + " % " + b + " = " + (a % b)); // same sign as first operand
// no exponentiation operator
```

This JavaScript code performs the same operations as your Go code. It prompts the user to input two integers and then outputs their sum, difference, product, quotient and remainder.

JavaScript's `Math.trunc()` method truncates a number towards zero.

And JavaScript's `%` (remainder) operator returns the remainder of a division operation that rounds down toward negative infinity. If you want it to round toward zero like Go, you need to implement this yourself using simple arithmetic operations.
