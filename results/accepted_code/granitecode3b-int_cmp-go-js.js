const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});
rl.question("Enter number 1: ", (n1) => {
  rl.question("Enter number 2: ", (n2) => {
    if (parseInt(n1) < parseInt(n2)) {
      console.log(`${n1} is less than ${n2}`);
    } else if (parseInt(n1) === parseInt(n2)) {
      console.log(`${n1} is equal to ${n2}`);
    } else {
      console.log(`${n1} is greater than ${n2}`);
    }
    rl.close();
  });
});
