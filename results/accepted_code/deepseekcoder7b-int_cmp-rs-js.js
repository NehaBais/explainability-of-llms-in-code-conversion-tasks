const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let nums = [];
rl.on("line", (input) => {
  nums.push(parseInt(input));
  if (nums.length === 2) rl.close();
}).on("close", () => {
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
