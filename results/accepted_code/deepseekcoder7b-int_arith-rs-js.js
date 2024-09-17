let args = process.argv.slice(2);

let a = parseInt(args[0]); // assuming the first two arguments are integers.
let b = parseInt(args[1]);

console.log("sum:              " + (a + b));
console.log("difference:       " + (a - b));
console.log("product:          " + a * b);

// JavaScript follows the same convention as Rust for division rounding towards zero and different sign handling.
console.log("integer quotient: " + Math.floor(a / b)); // truncates towards zero
console.log("remainder:        " + (a % b)); // If they are different, the result has same sign as first operand in most JavaScript platforms.
