const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
}));

rl.question("Enter first number: ", (a) => {
    rl.question("Enter second number: ", (b) => {

        let sum = parseInt(a) + parseInt(b);
        let difference = parseInt(a) - parseInt(b);
        let product = parseInt(a) * parseInt(b);
        let quotient = Math.trunc((parseInt(a) / parseInt(b))))
        let remainder = parseInt(a) % parseInt(b);

        console.log(`Sum: ${sum}`));
        console.log(`Difference: ${difference}`));
        console.log(`Product: ${product}`));
        console.log(`Quotient: ${quotient}}`));
        console.log(`Remainder: ${remainder}}`"));

        rl.close();
    });
}));