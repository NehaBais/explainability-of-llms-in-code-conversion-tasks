Sure! Here's the equivalent JavaScript code for the given Golang code:
```javascript
const readline = require('readline');
const rl = readline.createInterface({
 input: process.stdin,
 output: process.stdout
});
rl.question("Enter number 1: ", (n1) => {
 rl.question("Enter number 2: ", (n2) => {
 if (parseInt(n1) < parseInt(n2)) {
 console.log(`${n1} is less than ${n2}`);
 } else if (parseInt(n1) === parseInt(n2)) {
 console.log(`${n1} is equal to ${n2}`);
 } else {
 console.log(`${n1} is greater than ${n2}`);
 }
 rl.close();
 });
});
```
This JavaScript code uses the `readline` module to get input from the user, and then uses conditional statements (`if`, `else if`, and `else`) to compare the two numbers and display the appropriate message. The comparison operators used are `<`, `===`, and `>`, which corresponds to the less than, equal to, and greater than operators in Golang.

