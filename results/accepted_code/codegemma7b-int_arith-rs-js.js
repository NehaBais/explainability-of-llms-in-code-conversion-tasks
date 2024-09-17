const [a, b] = process.argv.slice(2).map(Number);

console.log(`sum:              ${a + b}`);
console.log(`difference:       ${a - b}`);
console.log(`product:          ${a * b}`);
console.log(`integer quotient: ${Math.floor(a / b)}`); // towards zero
console.log(`remainder:        ${a % b}`); // same sign as first operand
