Sure, here is the equivalent JavaScript code for your Python program:

```javascript
// Get two integers from user
let num1 = prompt('Enter first integer');
let num2 = prompt('Enter second integer');

// Convert string to number and perform operations
let qq = Number(num1) + Number(num2);
console.log("Sum: " + qq);
let ww = num1 - num2;
console.log("Difference: " + ww);
let ee = num1 * num2;
console.log("Product: " + ee);
let rr = num1 / num2;
let quotient = Math.round(rr) === rr ? 'Towards zero' : 'Away from zero'; // Rounding depends on if it rounds towards zero or away from zero, you can update it accordingly based on your requirements.
console.log('Integer quotient: ' + rr);
console.log('Float quotient: ' + rr.toFixed(2));
let tt = Number(num1 / num2).toFixed(2); // Rounding to 2 decimal places
let uu = parseInt(tt) - parseFloat(tt)*-10; // Sign of remainder depends on the signs of first and second numbers
console.log('Whole Remainder: ' + uu);
console.log('Actual Remainder: ' + (parseInt(uu)+parseFloat(uu))*-10);
let yy = Math.pow(num1, num2);
console.log("Exponentiation: " + yy);
```

This JavaScript code does the same thing as your Python program. It takes two integers from user and perform operations on them like sum, difference, product, quotient, remainder etc. The rounding is done based on if it rounds towards zero or away from zero.
