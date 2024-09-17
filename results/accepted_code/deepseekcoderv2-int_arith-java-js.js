const readlineSync = require("readline-sync");
var x = parseInt(readlineSync.question("Enter an integer : "));
var y = parseInt(readlineSync.question("Enter another integer : "));
console.log(`a + b = ${x + y}`);
console.log(`a - b = ${x - y}`);
console.log(`a * b = ${x * y}`);
var z;
if (y == 0) {
  console.log("Not defined");
} else {
  if (x / y > 0) {
    z = Math.floor(x / y);
  } else {
    z = Math.ceil(x / y);
  }
  console.log(`quotient of a / b (truncated to integer) = ${z}`);
}
if (x < 0 && y > 0) {
  console.log(`Remainder of a % b is negative`);
} else if (x > 0 && y < 0) {
  console.log("Remainder of a % b is negative");
} else {
  console.log(`Remainder of a % b is positive`);
}
console.log(`a ^ b = ${Math.pow(x, y)}`);
