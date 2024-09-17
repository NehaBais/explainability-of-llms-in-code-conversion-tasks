let readline = require("readline-sync");

let n1 = parseInt(readline.question("Enter first number: "));
let n2 = parseInt(readline.question("Enter second number: "));

if (n1 < n2) {
  console.log(n1 + " less than " + n2);
} else if (n1 === n2) {
  console.log(n1 + " equal to " + n2);
} else {
  console.log(n1 + " greater than " + n2);
}
