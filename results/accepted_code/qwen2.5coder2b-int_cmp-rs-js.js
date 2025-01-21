const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter the first integer: ", (first) => {
  rl.question("Enter the second integer: ", (second) => {
    const a = parseInt(first, 10);
    const b = parseInt(second, 10);

    if (a < b) {
      console.log(`${a} is less than ${b}`);
    } else if (a == b) {
      console.log(`${a} equals ${b}`);
    } else if (a > b) {
      console.log(`${a} is greater than ${b}`);
    }

    rl.close();
  });
});
