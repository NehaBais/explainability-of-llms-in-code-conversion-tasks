const args = process.argv.slice(2);
let a = parseInt(args[1]);
let b = parseInt(args[2]);

console.log("sum:              " + (a + b));
console.log("difference:       " + (a - b));
console.log("product:          " + a * b);
console.log("integer quotient: " + Math.trunc(a / b)); // truncates towards zero
console.log("remainder:        " + (a % b)); // same sign as first operand
