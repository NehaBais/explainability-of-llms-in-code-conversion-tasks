const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter first number:", (a) => {
  rl.question("Enter second number:", (b) => {
    // Convert strings to numbers
    let aNum = Number(a);
    let bNum = Number(b);

    let sum = aNum + bNum; // The result of adding 'a' and 'b'
    let difference = aNum - bNum; // The result of subtracting 'b' from 'a'
    let product = aNum * bNum; // The result of multiplying 'a' and 'b'
    let division = Math.trunc(aNum / bNum); // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result)
    // We use trunc to round towards zero in accordance with Java's integer division behavior.
    let remainder = aNum % bNum; // The remainder of dividing 'a' by 'b'

    console.log("a + b = " + sum);
    console.log("a - b = " + difference);
    console.log("a * b = " + product);
    console.log("quotient of a / b = " + division); // truncates towards 0
    console.log("remainder of a / b = " + remainder); // same sign as first operand

    rl.close();
  });
});
