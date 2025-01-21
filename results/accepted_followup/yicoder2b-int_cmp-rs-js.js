let readline = require("readline");
let rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter first number: ", function (answer1) {
  let a = parseInt(answer1);

  rl.question("Enter second number: ", function (answer2) {
    let b = parseInt(answer2);

    if (a < b) {
      console.log(`${a} is less than ${b}`);
    } else if (a == b) {
      console.log(`${a} equals to ${b}`);
    } else if (a > b) {
      console.log(`${a} is greater than ${b}`);
    }
  });
  rl.close();
});
