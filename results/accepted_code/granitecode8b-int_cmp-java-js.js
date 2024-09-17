const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});
rl.question("Enter first integer: ", (nbr1) => {
  rl.question("Enter second integer: ", (nbr2) => {
    nbr1 = parseInt(nbr1);
    nbr2 = parseInt(nbr2);
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
