const prompt = require("prompt-sync")();

const nbr1 = parseInt(prompt("Enter the first integer: "));
const nbr2 = parseInt(prompt("Enter the second integer: "));

if (nbr1 < nbr2) {
  console.log(`${nbr1} is less than ${nbr2}`);
}

if (nbr1 > nbr2) {
  console.log(`${nbr1} is greater than ${nbr2}`);
}

if (nbr1 === nbr2) {
  console.log(`${nbr1} is equal to ${nbr2}`);
}
