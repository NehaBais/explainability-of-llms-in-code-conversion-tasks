Here's the equivalent JavaScript code that meets the requirements you've specified:
```javascript
const readline = require('readline');
const rl = readline.createInterface({
 input: process.stdin,
 output: process.stdout
});
rl.question('Enter a number: ', (num1) => {
 rl.question('Enter another number: ', (num2) => {
 const num1Int = parseInt(num1);
 const num2Int = parseInt(num2);
 if (isNaN(num1Int) || isNaN(num2Int)) {
 console.log('Invalid input! Please enter valid numbers.');
 rl.close();
 return;
 }
 const sum = num1Int + num2Int;
 const difference = num1Int - num2Int;
 const product = num1Int * num2Int;
 const quotient = Math.trunc(num1Int / num2Int); // truncate towards 0
 const remainder = num1Int % num2Int; // same sign as first operand
 const exponentiation = Math.pow(num2Int, num1Int); // if available (exponentiation operator is enabled)
 console.log(`Sum: ${sum}`);
 console.log(`Difference: ${difference}`);
 console.log(`Product: ${product}`);
 console.log(`Quotient: ${quotient}`);
 console.log(`Remainder: ${remainder}`);
 if (!isNaN(exponentiation)) {
 console.log(`Exponentiation: ${exponentiation}`);
 }
 rl.close();
 });
});
```
This code uses the `readline` module to prompt the user for two numbers, parse them as integers using `parseInt`, and then perform the specified calculations and display the results. The `Math.trunc()` function is used to truncate the result of division towards 0, while the `%` operator returns the remainder with the same sign as the first operand (if operands have different signs). The exponentiation operator is checked for availability and included in the output if present.

