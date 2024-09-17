const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter a number: ", (num1) => {
  rl.question("Enter another number: ", (num2) => {
    if (parseInt(num1) < parseInt(num2)) {
      console.log(`${num1} is less than ${num2}`);
    } else if (parseInt(num1) === parseInt(num2)) {
      console.log(`${num1} is equal to ${num2}`);
    } else {
      console.log(`${num1} is greater than ${num2}`);
    }

    rl.close();
  });
});
