```javascript
const prompt = require('prompt-sync')();

const a = parseInt(prompt('Enter first integer: '));
const b = parseInt(prompt('Enter second integer: '));

const sum = a + b;
const difference = a - b;
const product = a * b;
const division = Math.floor(a / b); // truncates towards 0
const remainder = a % b; // same sign as first operand

console.log(`a + b = ${sum}`);
console.log(`a - b = ${difference}`);
console.log(`a * b = ${product}`);
console.log(`quotient of a / b = ${division}`);
console.log(`remainder of a / b = ${remainder}`);
```

**Explanation:**

* The code uses the `prompt` module to get two integers from the user.
* It performs the necessary calculations and stores the results in variables.
* The `Math.floor` function is used to perform integer division and truncate towards zero.
* The sign of the remainder matches the sign of the first operand.
* The output is displayed using template literals.
