Here is the equivalent JavaScript code for your Python code:

```javascript
// Get two integers from the user
var input1 = parseInt(prompt("Enter first integer"));
var input2 = parseInt(prompt("Enter second integer"));

// Calculate and display their sum
var qq = input1 + input2;
console.log("Sum: " + qq);

// Calculate and display their difference
var ww = input1 - input2;
console.log("Difference: " + ww);

// Calculate and display their product
var ee = input1 * input2;
console.log("Product: " + ee);

// Calculate and display their integer quotient (towards zero)
var rr = Math.floor(input1 / input2);
console.log("Integer Quotient: " + rr);

// Calculate and display their float quotient
var tt = input1 / input2;
console.log("Float Quotient: " + tt);

// Calculate and display their remainder with matching sign
var uu = input1 % input2;
console.log("Remainder: " + uu);

// Calculate and display their exponentiation
var yy = Math.pow(input1, input2);
console.log("Exponentiation: " + yy);
```
This JavaScript code takes two integers from the user using `prompt`, calculates the required values, and logs them to the console. Note that JavaScript's `%` operator returns a remainder with the same sign as the dividend. If you want a remainder with the opposite sign (like Python), you would need to write some additional logic to handle this.
