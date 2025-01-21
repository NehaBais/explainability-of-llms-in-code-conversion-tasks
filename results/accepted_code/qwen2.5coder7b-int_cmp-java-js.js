const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter first number: ", (answer1) => {
  rl.question("Enter second number: ", (answer2) => {
    const nbr1 = parseInt(answer1);
    const nbr2 = parseInt(answer2);

    if (nbr1 < nbr2) console.log(`${nbr1} is less than ${nbr2}`);

    if (nbr1 > nbr2) console.log(`${nbr1} is greater than ${nbr2}`);

    if (nbr1 === nbr2) console.log(`${nbr1} is equal to ${nbr2}`);

    rl.close();
  });
});
