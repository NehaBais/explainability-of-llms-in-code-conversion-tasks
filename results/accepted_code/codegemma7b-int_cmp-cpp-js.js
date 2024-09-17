const prompt = require("prompt-sync")();

const a = parseInt(prompt("Enter the first integer: "));
const b = parseInt(prompt("Enter the second integer: "));

if (isNaN(a) || isNaN(b)) {
  console.error("Could not read the numbers.");
  process.exit(1);
}

if (a < b) {
  console.log(`${a} is less than ${b}`);
}

if (a === b) {
  console.log(`${a} is equal to ${b}`);
}

if (a > b) {
  console.log(`${a} is greater than ${b}`);
}
