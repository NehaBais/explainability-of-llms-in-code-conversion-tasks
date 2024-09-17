var readline = require("readline");
var rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter first integer: ", function (a) {
  a = parseInt(a);
  rl.question("Enter second integer: ", function (b) {
    b = parseInt(b);

    if (a < b) console.log(a + " is less than " + b);

    if (a == b) console.log(a + " is equal to " + b);

    if (a > b) console.log(a + " is greater than " + b);

    rl.close();
  });
});
