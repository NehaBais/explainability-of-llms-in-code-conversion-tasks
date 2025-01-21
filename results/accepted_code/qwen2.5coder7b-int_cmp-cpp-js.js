let readline = require("readline");

let rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter two integers separated by a space: ", function (answer) {
  let nums = answer.split(" ").map(Number);

  if (isNaN(nums[0]) || isNaN(nums[1])) {
    console.log("Invalid numbers");
    return;
  }

  let a = nums[0];
  let b = nums[1];

  // test for less-than
  if (a < b) console.log(a + " is less than " + b);

  // test for equality
  if (a == b) console.log(a + " is equal to " + b);

  // test for greater-than
  if (a > b) console.log(a + " is greater than " + b);
});
