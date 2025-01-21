 Sure, here is the equivalent JavaScript code for the given Rust code:

```javascript
const args = process.argv.slice(2);
const a = parseInt(args[0], 10);
const b = parseInt(args[1], 10);

console.log(`sum:              ${a + b}`);
console.log(`difference:       ${a - b}`);
console.log(`product:          ${a * b}`);
console.log(`integer quotient: ${Math.floor((a / b))}`); // truncates towards zero
console.log(`remainder:        ${a % b}`); // same sign as first operand
```

Explanation:
1. `process.argv` is used to get command-line arguments in Node.js, similar to how Rust uses `env::args()`.
2. The slice method is used to skip the first two elements (`node`, `script.js`), leaving just the user inputs.
3. `parseInt` with a radix of 10 is used to convert string arguments to integers.
4. For the integer quotient, JavaScript's division operation followed by `Math.floor()` is used to truncate towards zero, similar to Rust.
5. The remainder operation uses the modulo operator (`%`), which in JavaScript follows the sign of the dividend (first operand) unless specified otherwise.
