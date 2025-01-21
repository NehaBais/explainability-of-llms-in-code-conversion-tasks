 Here's the equivalent JavaScript code for the provided Go program:

```javascript
process.stdout.write("Enter two integers: ");
let a = +readlineSync();
let b = +readlineSync();
console.log(`${a} + ${b} = ${a + b}`);
console.log(`${a} - ${b} = ${a - b}`);
console.log(`${a} * ${b} = ${a * b}`);
console.log(`${a} / ${b} = ${Math.floor(a / b)}`);  // truncates towards zero
console.log(`${a} % ${b} = ${a % b}`);             // same sign as first operand
// no exponentiation operator in JavaScript, but you can use a function if needed
```

This code uses the `readlineSync` module from the `readline-sync` package to get input from the user. The quotient is calculated using `Math.floor()` to truncate towards zero, and the remainder follows the rules specified (same sign as the first operand). Note that JavaScript does not have a built-in exponentiation operator, but you can use a function for that if needed.
