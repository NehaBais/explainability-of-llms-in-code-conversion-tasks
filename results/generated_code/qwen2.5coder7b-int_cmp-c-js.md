Here's how you can convert the given C code into JavaScript:
```javascript
let readlineSync = require('readline-sync');

let a = parseInt(readlineSync.question("Enter first integer: "));
let b = parseInt(readlineSync.question("Enter second integer: "));

if (a < b) {
  console.log(a + " is less than " + b);
}

if (a === b) {
  console.log(a + " is equal to " + b);
}

if (a > b) {
  console.log(a + " is greater than " + b);
}
```
This JavaScript code does the same thing as your C code. It gets two integers from the user, then it tests each possible comparison with `if` statements and logs a message to the console based on which comparison is true.

Note: To use `readlineSync`, you will need to install the package by running `npm install readline-sync` in the terminal or command prompt.
