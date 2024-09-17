const readline = require("readline");

let rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter the first integer: ", (A) => {
  rl.question("Enter the second integer: ", (b) => {
    A = parseInt(A);
    b = parseInt(b);
    if (A < b) {
      console.log(`${A} is less than ${b}`);
    } else if (A == b) {
      console.log(`${A} equals ${b}`);
    } else if (A > b) {
      console.log(`${A} is greater than ${b}`);
    }

    rl.close();
  });
});
