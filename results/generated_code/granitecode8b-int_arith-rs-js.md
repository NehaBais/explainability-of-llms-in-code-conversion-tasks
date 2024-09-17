Here's the equivalent code in JavaScript:
```
const args = process.argv.slice(2).map(Number);
const [a, b] = args;
console.log(`sum:              ${a + b}`);
console.log(`difference:       ${a - b}`);
console.log(`product:          ${a * b}`);
console.log(`integer quotient: ${Math.trunc(a / b)}`); // truncates towards zero
console.log(`remainder:        ${a % b}`); // same sign as first operand
```
Note that in JavaScript, the `//` operator is used for integer division, which rounds towards zero (just like Rust's `i32::div`). The `%` operator returns the remainder of an integer division operation, and its sign matches the sign of the first operand.

