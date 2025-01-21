const args = process.argv.slice(2);
const a = parseInt(args[0], 10);
const b = parseInt(args[1], 10);

console.log(`sum:              ${a + b}`);
console.log(`difference:       ${a - b}`);
console.log(`product:          ${a * b}`);
console.log(`integer quotient: ${Math.floor(a / b)}`); // truncates towards zero
console.log(`remainder:        ${a % b}`); // same sign as first operand
