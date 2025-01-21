const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter first integer: ", (a) => {
  rl.question("Enter second integer: ", (b) => {
    a = parseInt(a);
    b = parseInt(b);

    // test for less-than
    if (a < b) {
      console.log(`${a} is less than ${b}`);
    }

    // test for equality
    if (a == b) {
      console.log(`${a} is equal to ${b}`);
    }

    // test for greater-than
    if (a > b) {
      console.log(`${a} is greater than ${b}`);
    }

    rl.close();
  });
});
