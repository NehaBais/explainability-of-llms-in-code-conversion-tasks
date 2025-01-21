 Sure, here is the equivalent JavaScript code for the given C code:

```javascript
const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

function getInput(prompt) {
  return new Promise((resolve) => {
    rl.question(prompt, (answer) => {
      resolve(parseInt(answer, 10));
    });
  });
}

async function main() {
  let a = await getInput("Enter the first integer: ");
  let b = await getInput("Enter the second integer: ");

  console.log(`a + b = ${a + b}`);
  console.log(`a - b = ${a - b}`);
  console.log(`a * b = ${a * b}`);
  console.log(`a / b (integer quotient) = ${Math.floor(a / b)}`); // truncates towards zero
  console.log(`a % b (remainder) = ${a % b}`); // same sign as the first operand

  rl.close();
}

main();
```

This JavaScript code does the following:
1. Prompts the user to enter two integers.
2. Displays their sum, difference, product, integer quotient (truncates towards zero), and remainder (same sign as the first operand).
3. Uses `Math.floor` for integer division to truncate towards zero.
