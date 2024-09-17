// JavaScript code
const readline = require("readline-sync");

function main() {
  let num1 = parseInt(readline.question("Enter the first number: "));
  let num2 = parseInt(readline.question("Enter the second number: "));

  if (num1 < num2) {
    console.log(`${num1} is less than ${num2}`);
  } else if (num1 === num2) {
    console.log(`${num1} equals ${num2}`);
  } else if (num1 > num2) {
    console.log(`${num1} is greater than ${num2}`);
  }
}
main();
