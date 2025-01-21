const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let inputs = [];

rl.question("Enter two integers:\n", (answer) => {
  const nums = answer.split("\n").map(Number);

  let a = nums[0];
  let b = nums[1];

  if (a < b) {
    console.log(`${a} is less than ${b}`);
  } else if (a === b) {
    console.log(`${a} equals ${b}`);
  } else if (a > b) {
    console.log(`${a} is greater than ${b}`);
  }

  rl.close();
});
