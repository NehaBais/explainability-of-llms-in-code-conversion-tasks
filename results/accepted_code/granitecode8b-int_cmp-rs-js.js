const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});
rl.question("Enter first integer: ", (a) => {
  rl.question("Enter second integer: ", (b) => {
    a = parseInt(a);
    b = parseInt(b);

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
