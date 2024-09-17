let reader = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

reader.question(`Enter two integers separated by a space: `, function (nums) {
  nums = nums.trim().split(" ");
  let [a, b] = nums.map((n) => parseInt(n));

  if (a < b) {
    console.log(`${a} is less than ${b}`);
  } else if (a === b) {
    console.log(`${a} equals ${b}`);
  } else if (a > b) {
    console.log(`${a} is greater than ${b}`);
  }

  reader.close();
});
