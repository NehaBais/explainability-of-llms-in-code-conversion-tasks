const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter first integer: ", (num1) => {
  rl.question("Enter second integer: ", (num2) => {
    if (parseInt(num1, 10) < parseInt(num2, 10)) {
      console.log(`${num1} is less than ${num2}`);
    } else if (parseInt(num1, 10) == parseInt(num2, 10)) {
      console.log(`${num1} equals ${num2}`);
    } else if (parseInt(num1, 10) > parseInt(num2, 10)) {
      console.log(`${num1} is greater than ${num2}`);
    }

    rl.close();
  });
});
