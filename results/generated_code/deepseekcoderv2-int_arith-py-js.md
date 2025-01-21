 Here's the JavaScript equivalent of the provided Python code. This script prompts the user to enter two integers and then performs the specified operations on them, displaying the results as requested:

```javascript
// Get input from the user
const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Enter first integer: ', (input1) => {
  rl.question('Enter second integer: ', (input2) => {
    // Convert string inputs to integers
    const num1 = parseInt(input1, 10);
    const num2 = parseInt(input2, 10);

    // Perform operations
    const sum = num1 + num2;
    const difference = num1 - num2;
    const product = num1 * num2;
    const integerQuotient = Math.trunc(num1 / num2);
    const floatQuotient = num1 / num2;
    const wholeRemainder = ((Math.floor(num1 / num2) - (num1 / num2)) * num2).toFixed(0);
    const actualRemainder = num1 % num2;
    const exponentiation = Math.pow(num1, num2);

    // Display results
    console.log("Sum: " + sum);
    console.log("Difference: " + difference);
    console.log("Product: " + product);
    console.log("Integer quotient: " + integerQuotient);
    console.log("Float quotient: " + floatQuotient);
    console.log("Whole Remainder: " + wholeRemainder);
    console.log("Actual Remainder: " + actualRemainder);
    console.log("Exponentiation: " + exponentiation);

    rl.close();
  });
});
```

This JavaScript script uses the `readline` module to get user input, performs the specified arithmetic operations, and then prints the results to the console. Note that in JavaScript, when dividing integers using the `/` operator, it returns a floating-point result, which is why both integer and float quotients are calculated explicitly here. The remainder operation uses the `%` operator directly for simplicity, as there's no need for special handling or rounding since it's already implemented to follow JavaScript's rules regarding sign extension in division.
