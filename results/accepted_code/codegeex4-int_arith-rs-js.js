// Get the command line arguments
let args = process.argv.slice(2);
let a = parseInt(args[0]);
let b = parseInt(args[1]);

console.log("sum:              " + (a + b));
console.log("difference:       " + (a - b));
console.log("product:          " + a * b);
console.log("integer quotient: " + Math.floor(a / b)); // truncates towards zero
console.log("remainder:        " + (a % b)); // same sign as first operand
