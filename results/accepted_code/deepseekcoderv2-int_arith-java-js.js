const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter the first integer: ", (a) => {
  a = parseInt(a);
  rl.question("Enter the second integer: ", (b) => {
    b = parseInt(b);

    const sum = a + b; // The result of adding 'a' and 'b'
    const difference = a - b; // The result of subtracting 'b' from 'a'
    const product = a * b; // The result of multiplying 'a' and 'b'
    const division = Math.floor(a / b); // The result of dividing 'a' by 'b' (truncates towards zero)
    const remainder = a % b; // The remainder of dividing 'a' by 'b', same sign as first operand

    console.log(`a + b = ${sum}`);
    console.log(`a - b = ${difference}`);
    console.log(`a * b = ${product}`);
    console.log(`quotient of a / b = ${division}`); // truncates towards zero
    console.log(`remainder of a / b = ${remainder}`); // same sign as first operand

    rl.close();
  });
});
