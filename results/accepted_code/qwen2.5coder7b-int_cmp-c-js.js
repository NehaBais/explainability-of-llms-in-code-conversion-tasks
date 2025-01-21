let readlineSync = require("readline-sync");

let a = parseInt(readlineSync.question("Enter first integer: "));
let b = parseInt(readlineSync.question("Enter second integer: "));

if (a < b) {
  console.log(a + " is less than " + b);
}

if (a === b) {
  console.log(a + " is equal to " + b);
}

if (a > b) {
  console.log(a + " is greater than " + b);
}
