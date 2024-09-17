let a = 0,
  b = 0;
const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});
readline.question("Enter two integers: ", (input) => {
  const inputs = input.split(" ");
  a = parseInt(inputs[0]);
  b = parseInt(inputs[1]);

  if (a < b) console.log(`${a} is less than ${b}`);
  if (a === b) console.log(`${a} is equal to ${b}`);
  if (a > b) console.log(`${a} is greater than ${b}`);

  readline.close();
});
