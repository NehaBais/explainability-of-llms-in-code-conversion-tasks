I'm sorry for the confusion but this code cannot be directly translated to JavaScript due to its use of Golang features. However, I'll provide some basic examples on how you can achieve similar functionality in JavaScript using built-in arithmetic operators and other JavaScript constructs.
```javascript
let a, b;
console.log("Enter two integers: ");
[a, b] = readline().split(' ').map(Number); // Assuming the user input is separated by spaces
console.log(`${a} + ${b} = ${a + b}`);
console.log(`${a} - ${b} = ${a - b}`);
console.log(`${a} * ${b} = ${a * b}`);
console.log(`${a} / ${b} = Math.trunc(a / b)`); // Truncates towards zero
console.log(`${a} % ${b} = ${a % b === 0 ? 0 : a % b < 0 ? (Math.abs(a) % Math.abs(b)) * -1 : a % b}`);
// No exponentiation operator in JavaScript, use Math.pow() for exponents
```
I hope this helps! Let me know if you have any further questions or need assistance with anything else.
