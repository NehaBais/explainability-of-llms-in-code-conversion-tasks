const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter the first integer: ", (num1) => {
  rl.question("Enter the second integer: ", (num2) => {
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
