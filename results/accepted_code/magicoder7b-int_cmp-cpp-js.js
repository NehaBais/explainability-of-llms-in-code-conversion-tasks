var readline = require("readline");

var rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter two numbers separated by space: ", function (answer) {
  var numbers = answer.split(" ").map(Number); //convert string to array of numbers

  if (numbers.length != 2) {
    console.log("Invalid input");
    process.exit();
  }

  var a = numbers[0];
  var b = numbers[1];

  // test for less-than
  if (a < b) console.log(a + " is less than " + b);

  // test for equality
  if (a == b) console.log(a + " is equal to " + b);

  // test for greater-than
  if (a > b) console.log(a + " is greater than " + b);

  rl.close();
});
