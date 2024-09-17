Here's the converted code from Golang to JavaScript:
```javascript
const readline = require('readline').createInterface({
 input: process.stdin,
 output: process.stdout
});
console.log("Enter first number:");
readline.on('line', (num1) => {
 console.log("Enter second number:");
 readline.on('line', (num2) => {
 num1 = parseInt(num1);
 num2 = parseInt(num2);
 if (isNaN(num1) || isNaN(num2)) {
 console.log("Please enter valid numbers.");
 return;
 }
 switch (true) {
 case num1 < num2:
 console.log(`${num1} is less than ${num2}`);
 break;
 case num1 == num2:
 console.log(`${num1} is equal to ${num2}`);
 break;
 case num1 > num2:
 console.log(`${num1} is greater than ${num2}`);
 break;
 }
 readline.close();
 });
});
```
To test the condition for each case separately, we have used a switch statement with three cases. The first case checks if `num1` is less than `num2`, the second case checks if `num1` is equal to `num2`, and the third case checks if `num1` is greater than `num2`.
We have also added error handling to ensure that the user enters valid numbers. If the user enters non-numeric values, we display an error message and exit the program.
To run this code, save it in a file with a `.js` extension and run it using Node.js. You will be prompted to enter two numbers, and the program will output a message indicating whether the first number is less than, equal to, or greater than the second number.

