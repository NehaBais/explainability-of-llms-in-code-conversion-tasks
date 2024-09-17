Here's the equivalent JavaScript code that meets the requirements:
```
const readline = require('readline');
const rl = readline.createInterface({
 input: process.stdin,
 output: process.stdout
});
rl.question('Enter a number: ', (a) => {
 rl.question('Enter another number: ', (b) => {
 console.log(`a+b = ${parseInt(a)+parseInt(b)}`);
 console.log(`a-b = ${parseInt(a)-parseInt(b)}`);
 console.log(`a*b = ${parseInt(a)*parseInt(b)}`);
 const quotient = parseInt(a)/parseInt(b);
 const remainder = parseInt(a)%parseInt(b);
 let exponentiation;
 if (Math.pow) {
 exponentiation = Math.pow(parseInt(a), parseInt(b));
 } else {
 exponentiation = Math.pow(2, 3);
 console.log('Note: Your JavaScript environment does not support exponentiation.');
 }
 console.log(`a/b = ${quotient}, remainder ${remainder}`);
 console.log(`a^b = ${exponentiation}`);
 rl.close();
 });
});
```
This code uses the `readline` module to prompt the user for two integers, and then calculates their sum, difference, product, quotient, remainder, and exponentiation using JavaScript's built-in functions. The `Math.pow` function is used to calculate the exponentiation, and an if statement checks if the current environment supports exponentiation. Finally, the results are printed to the console.

