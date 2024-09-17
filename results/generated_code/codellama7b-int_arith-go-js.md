
Here's the code in JavaScript:
```
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
console.log(a + " * " + b + " = " + (a * b));
console.log(a + " / " + b + " = " + Math.trunc(a/b)); // Truncates towards 0
console.log(a + " % " + b + " = " + a%b); // Same sign as the first operand
```
Explanation:

In JavaScript, we use `let` to declare variables instead of `var`. We also use `prompt()` to get input from the user. In this case, we are using it to get two integers from the user and storing them in the variables `a` and `b`.

To print the sum, difference, product, quotient, and remainder of the two numbers, we use `console.log()` with formatted strings. We can use parentheses around the expressions to ensure that they are evaluated before being printed.

For example, to print the sum of `a` and `b`, we would use `console.log(a + " + " + b + " = " + (a + b))`. This will first add `a` and `b`, then convert them to strings using the `+` operator, and finally concatenate them with the formatted string `" + " + " = " + "` to create a complete string that we can print.

Note that in JavaScript, there is no exponentiation operator. However, you can use the built-in `Math.pow()` function to raise a number to a power. For example, to calculate `a^b`, where `a` and `b` are integers, we would use `Math.pow(a, b)`.

Also note that in JavaScript, the `%` operator is used for modulo division, which returns the remainder of a division operation. The result will have the same sign as the first operand if they are different, or the sign of the second operand if they are the same. In this case, we are using it to calculate `a%b`, which will give us the remainder of dividing `a` by `b`.
