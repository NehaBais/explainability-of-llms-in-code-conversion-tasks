const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter two integers (separated by a space): ", (input) => {
  const [a, b] = input.split(" ").map(Number);

  if (a < b) {
    console.log(`${a} is less than ${b}`);
  } else if (a === b) {
    console.log(`${a} is equal to ${b}`);
  } else {
    console.log(`${a} is greater than ${b}`);
  }

  rl.close();
});
