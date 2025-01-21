const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter the first integer: ", (nbr1Str) => {
  const nbr1 = parseInt(nbr1Str);

  rl.question("Enter the second integer: ", (nbr2Str) => {
    const nbr2 = parseInt(nbr2Str);

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
