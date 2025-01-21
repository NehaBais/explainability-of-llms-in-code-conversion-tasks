Here is the equivalent JavaScript code for your Java code:

```JavaScript
let a = parseInt(prompt('Enter first integer:'));
let b = parseInt(prompt('Enter second integer:'));

let sum = a + b;        // The result of adding 'a' and 'b'
let difference = a - b;  // The result of subtracting 'b' from 'a'
let product = a * b;     // The result of multiplying 'a' and 'b'
let division = Math.floor(a / b);   // The result of dividing 'a' by 'b' (Note: division does not contain the fractional result)
let remainder = a % b;  // The remainder of dividing 'a' by 'b'

console.log("a + b = " + sum);
console.log("a - b = " + difference);
console.log("a * b = " + product);
console.log("quotient of a / b (truncates towards 0) = " + division);   
console.log("remainder of a / b (same sign as first operand) = " + remainder);   
```
In JavaScript, the prompt function is used to get inputs from the user. Unlike Java's Scanner, JavaScript doesn't have built-in support for taking input directly in the console. Therefore, we use the prompt function which pops up a dialog box asking for user input.

Also, JavaScript uses `parseInt` function to convert string to integer before performing calculations.

JavaScript's division operation `/` by default rounds towards zero and `%` operator gives remainder with sign of first operand. If you want the same behavior as in Java (rounding towards negative infinity), you need to use `Math.floor()`.
