let readline = require("readline");
let rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter the first integer: ", (a) => {
  rl.question("Enter the second integer: ", (b) => {
    let sum = parseInt(a) + parseInt(b);
    console.log(`a + b = ${sum}`);

    let difference = parseInt(a) - parseInt(b);
    console.log(`a - b = ${difference}`);

    let product = parseInt(a) * parseInt(b);
    console.log(`a * b = ${product}`);

    let division = Math.floor(parseInt(a) / parseInt(b)); // rounds towards 0
    console.log(`quotient of a / b = ${division}`);

    let remainder =
      parseInt(a) % parseInt(b) !== 0 ? Math.abs(parseInt(a) % parseInt(b)) : 0; // same sign as first operand
    console.log(`remainder of a / b = ${remainder}`);

    rl.close();
  });
});
