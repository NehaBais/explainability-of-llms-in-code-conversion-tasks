Here is the JavaScript equivalent of your C++ code:

```javascript
let A = prompt("Enter the first integer");
let b = prompt("Enter the second integer");

A = parseInt(A);
b = parseInt(b);

console.log(`The sum of ${A} and ${b} is ${A + b}.`);
console.log(`The difference between ${A} and ${b} is ${A - b}.`);
console.log(`The product of ${A} and ${b} is ${A * b}.`);
console.log(`The integer quotient of ${A} divided by ${b} is ${Math.floor(A / b)}.`);

let remainder = A % b;
if (remainder < 0 && A > 0) {
  remainder += Math.abs(b);
}
console.log(`The remainder when ${A} is divided by ${b} is ${remainder}. The sign of the remainder matches the sign of the first operand.`);

let exponentiation = A ** b;
console.log(`The result of ${A} to the power of ${b} is ${exponentiation}.`);
```

In JavaScript, we use `prompt()` function to get input from user. The input is a string, so we need to convert it to integer using `parseInt()`. We use the `console.log()` function to display output. For integer division, we use `Math.floor()` because in JavaScript, `/` operator returns float number even when one of operand is int.

For the remainder calculation, if a and b are positive, the remainder is positive. If a is negative and b is positive, the remainder becomes positive after adding absolute value of b to it.

For exponentiation, we use double asterisks `**` operator.
