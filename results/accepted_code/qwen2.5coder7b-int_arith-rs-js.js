let a = parseInt(prompt("Enter the first number"));
let b = parseInt(prompt("Enter the second number"));

console.log(`sum:              ${a + b}`);
console.log(`difference:       ${a - b}`);
console.log(`product:          ${a * b}`);
console.log(`integer quotient: ${Math.floor(a / b)}`); // truncates towards zero
console.log(`remainder:        ${a % b}`); // same sign as first operand
