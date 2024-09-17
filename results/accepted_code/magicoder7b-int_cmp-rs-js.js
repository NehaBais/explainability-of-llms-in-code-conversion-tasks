const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});
let num1;
rl.question("Enter first number: ", (answer) => {
  num1 = parseInt(answer);
  rl.close();
});
rl.on("line", (answer) => {
  let num2 = parseInt(answer);
  if (num1 < num2) {
    console.log(`${num1} is less than ${num2}`);
  } else if (num1 === num2) {
    console.log(`${num1} equals ${num2}`);
  } else {
    console.log(`${num1} is greater than ${num2}`);
  }
  rl.close();
});
