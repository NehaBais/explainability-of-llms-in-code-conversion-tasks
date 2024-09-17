Here's how you can convert the given Rust code to JavaScript:

```javascript
const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question("Enter first integer: ", (num1) => {
    rl.question("Enter second integer: ", (num2) => {
        if (parseInt(num1, 10) < parseInt(num2, 10)) {
            console.log(`${num1} is less than ${num2}`);
        } else if (parseInt(num1, 10) == parseInt(num2, 10)) {
            console.log(`${num1} equals ${num2}`);
        } else if (parseInt(num1, 10) > parseInt(num2, 10)) {
            console.log(`${num1} is greater than ${num2}`);
        }

        rl.close();
    });
});
```

This script uses the 'readline' module to read user input. The program first prompts for the first and second integers, then checks their values using if-else statements, and finally logs a message based on the result of the comparison. It closes the readline interface after logging the message.

Remember that in JavaScript, number parsing is done with `parseInt` function (with radix as the second argument to ensure decimal format).
