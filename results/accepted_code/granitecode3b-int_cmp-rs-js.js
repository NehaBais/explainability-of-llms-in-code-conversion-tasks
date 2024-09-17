const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter the first number: ", (num1) => {
  rl.question("Enter the second number: ", (num2) => {
    const a = parseInt(num1);
    const b = parseInt(num2);

    if (a < b) {
      console.log(`${a} is less than ${b}`);
    } else if (a === b) {
      console.log(`${a} equals ${b}`);
    } else {
      console.log(`${a} is greater than ${b}`);
    }

    rl.close();
  });
});
