const args = process.argv.slice(2).map(Number);
const [a, b] = args;
console.log(`sum:              ${a + b}`);
console.log(`difference:       ${a - b}`);
console.log(`product:          ${a * b}`);
console.log(`integer quotient: ${Math.trunc(a / b)}`); // truncates towards zero
console.log(`remainder:        ${a % b}`); // same sign as first operand
