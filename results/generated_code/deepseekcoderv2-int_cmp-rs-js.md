 Sure, here's the equivalent JavaScript code to achieve the same functionality as your Rust code:

```javascript
const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question('Enter the first integer: ', (num1) => {
    rl.question('Enter the second integer: ', (num2) => {
        const a = parseInt(num1, 10);
        const b = parseInt(num2, 10);
        
        if (a < b) {
            console.log(`${a} is less than ${b}`);
        } else if (a === b) {
            console.log(`${a} equals ${b}`);
        } else if (a > b) {
            console.log(`${a} is greater than ${b}`);
        }
        
        rl.close();
    });
});
```

This JavaScript code uses the `readline` module to prompt the user for two integers and then compares them using the appropriate comparison operators, displaying a message based on the result of the comparison.
