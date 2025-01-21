const readline = require('readline');
let rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
}));

rl.question("Enter two integers separated by a space: ", (answer) => {
  let nums = answer.split(" ").map(Number);
  let a = nums[0];
  let b = nums[1];

  if (a < b) {
    console.log(`${a} is less than ${b}`));
  } else if (a === b) {
    console.log(`${a} equals ${b}`));
  } else if (a > b) {
    console.log(`${a} is greater than ${b}`));
  };

  rl.close();
});