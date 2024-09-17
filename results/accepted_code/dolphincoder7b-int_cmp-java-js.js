const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

async function main() {
  let nbr1 = await parseInt(readline.question("Enter the first integer:\n"));
  let nbr2 = await parseInt(readline.question("Enter the second integer:\n"));

  if (nbr1 < nbr2) {
    console.log(`${nbr1} is less than ${nbr2}`);
  } else if (nbr1 > nbr2) {
    console.log(`${nbr1} is greater than ${nbr2}`);
  } else {
    console.log(`${nbr1} is equal to ${nbr2}`);
  }

  readline.close();
}

main().catch((error) => console.error("An error occurred:", error));
