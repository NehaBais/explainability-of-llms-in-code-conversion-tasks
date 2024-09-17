Sure, here's the equivalent JavaScript code:
```
const readline = require('readline');
const rl = readline.createInterface({
 input: process.stdin,
 output: process.stdout
});
 
rl.question('Enter a number: ', (num1) => {
 rl.question('Enter another number: ', (num2) => {
 

 if (parseInt(num1) < parseInt(num2)) {
 console.log(`${num1} is less than ${num2}`);
 } else if (parseInt(num1) === parseInt(num2)) {
 console.log(`${num1} is equal to ${num2}`);
 } else {
 console.log(`${num1} is greater than ${num2}`);
 }
 

 rl.close();
 });
});
```
This code uses the `readline` module to prompt the user for input, and then compares the two numbers using conditional statements. The `parseInt` function is used to convert the input strings to integers before comparison.

