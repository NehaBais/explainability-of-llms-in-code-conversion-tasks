var readline = require("readline");
const { exit } = require("process");

var rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

rl.question("Enter first number: ", function (nbr1) {
  rl.question("Enter second number: ", function (nbr2) {
    nbr1 = Number(nbr1);
    nbr2 = Number(nbr2);

    if (isNaN(nbr1) || isNaN(nbr2)) {
      console.log("Input is not a number!");
      process.exit();
    }

    if (nbr1 < nbr2) {
      console.log(`${nbr1} is less than ${nbr2}`);
    } else if (nbr1 > nbr2) {
      console.log(`${nbr1} is greater than ${nbr2}`);
    } else {
      console.log(`${nbr1} is equal to ${nbr2}`);
    }
    rl.close();
  });
});
