Sure, here's the equivalent JavaScript code:
```
const readline = require('readline');
const rl = readline.createInterface({
 input: process.stdin,
 output: process.stdout
});
 
rl.question('Enter the first number: ', (num1) => {
 rl.question('Enter the second number: ', (num2) => {
 const a = parseInt(num1);
 const b = parseInt(num2);
 
 if (a < b) {
 console.log(`${a} is less than ${b}`);
 } else if (a === b) {
 console.log(`${a} equals ${b}`);
 } else {
 console.log(`${a} is greater than ${b}`);
 }
 
 rl.close();
 });
});
```
This code uses the `readline` module to prompt the user for input, and then uses `parseInt()` to convert the input strings to integers. The code then uses conditional statements to check if the first integer is less than, equal to, or greater than the second integer, and prints a message accordingly. 
Note that this code only works in Node.js, as it requires the `readline` module. If you're running this code in a browser environment, you may need to use a different approach to prompt the user for input and handle the results.

