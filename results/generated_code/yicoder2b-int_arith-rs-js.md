This problem cannot be solved directly in JavaScript because the language doesn't provide the necessary operators to perform all of those operations. However, the requirements are very similar to how they would be done in Rust and C++. Here is a rough conversion:

```javascript
const readline = require('readline').createInterface({ input: process.stdin, output: process.stdout });

readline.question("Please enter the first number: ", function (a) {
    let num1 = parseInt(a);

    readline.question("Please enter the second number: ", function (b) {
        let num2 = parseInt(b);

        console.log(`sum:              ${num1 + num2}`);
        console.log(`difference:       ${num1 - num2}`);
        console.log(`product:          ${num1 * num2}`);
        // truncates towards zero (essentially rounds towards negative infinity)
        console.log(`integer quotient: ${Math.floor(num1 / num2)}`);
        // if the remainder of a/b is positive or negative, it's the same as b
        console.log(`remainder:        ${num1 % num2}`); 

        readline.close();
    });
});
```
This code will run in a Node.js environment and require readline module to take user input. Note that this only provides the basic operations of addition, subtraction, multiplication, integer division (truncating towards negative infinity), and modulus operation between two integers from the user and does not handle any kind of errors. For full error handling you would need a more complex solution involving try/catch blocks and checking for NaN values or other valid input.
