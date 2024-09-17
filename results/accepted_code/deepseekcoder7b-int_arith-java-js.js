let readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

readline.question("Enter first integer:\n", (a) => {
  readline.question("Enter second integer:\n", (b) => {
    let sum = parseInt(a) + parseInt(b); // The result of adding 'a' and 'b'
    let difference = parseInt(a) - parseInt(b); // The result of subtracting 'b' from 'a'
    let product = parseInt(a) * parseInt(b); // The result of multiplying 'a' and 'b'
    let division = Math.floor(parseInt(a) / parseInt(b)); // The result of dividing 'a' by 'b', truncates towards zero
    let remainder = parseInt(a) % parseInt(b); // The remainder of dividing 'a' by 'b'

    console.log("a + b = " + sum);
    console.log("a - b = " + difference);
    console.log("a * b = " + product);
    console.log("quotient of a / b = " + division); // truncates towards 0
    console.log("remainder of a / b = " + remainder); // same sign as first operand

    readline.close();
  });
});
