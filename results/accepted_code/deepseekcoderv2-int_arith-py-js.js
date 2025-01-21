// Get input from the user
const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter first integer: ", (input1) => {
  rl.question("Enter second integer: ", (input2) => {
    // Convert string inputs to integers
    const num1 = parseInt(input1, 10);
    const num2 = parseInt(input2, 10);

    // Perform operations
    const sum = num1 + num2;
    const difference = num1 - num2;
    const product = num1 * num2;
    const integerQuotient = Math.trunc(num1 / num2);
    const floatQuotient = num1 / num2;
    const wholeRemainder = (
      (Math.floor(num1 / num2) - num1 / num2) *
      num2
    ).toFixed(0);
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
