Here's the JavaScript version of your Rust code:

```javascript
const readline = require('readline');

let rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Enter the first integer: ', (A) => {
  rl.question('Enter the second integer: ', (b) => {
    A = parseInt(A);
    b = parseInt(b);
    if (A < b) {
        console.log(`${A} is less than ${b}`);
    } else if (A == b) {
        console.log(`${A} equals ${b}`);
    } else if (A > b) {
        console.log(`${A} is greater than ${b}`);
    }

    rl.close();
  });
});
```

This script takes two integers from the user, compares them and prints a message based on their relationship. The input is done using Node's built-in readline module in JavaScript. The numbers entered by the user are parsed to integer before comparison.
