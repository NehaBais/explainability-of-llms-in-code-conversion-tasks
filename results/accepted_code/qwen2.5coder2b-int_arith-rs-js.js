const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

readline.question("Enter the first integer: ", (a) => {
  readline.question("Enter the second integer: ", (b) => {
    const sum = a + b;
    const difference = a - b;
    const product = a * b;
    const quotient = Math.trunc(a / b);
    const remainder = a % b;

    console.log(`sum: ${sum}`);
    console.log(`difference: ${difference}`);
    console.log(`product: ${product}`);
    console.log(`integer quotient: ${quotient}`);
    console.log(`remainder: ${remainder}`);

    readline.close();
  });
});
