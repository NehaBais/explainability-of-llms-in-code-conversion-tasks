 Sure, here's the equivalent JavaScript code using Node.js to get two integers from the user and display messages based on their comparison:

```javascript
const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Enter first integer: ', (a) => {
  rl.question('Enter second integer: ', (b) => {
    a = parseInt(a);
    b = parseInt(b);

    // test for less-than
    if (a < b) {
      console.log(`${a} is less than ${b}`);
    }

    // test for equality
    if (a == b) {
      console.log(`${a} is equal to ${b}`);
    }

    // test for greater-than
    if (a > b) {
      console.log(`${a} is greater than ${b}`);
    }

    rl.close();
  });
});
```

This code uses the `readline` module to prompt the user for input, convert them to integers, and then perform the comparisons as specified.
