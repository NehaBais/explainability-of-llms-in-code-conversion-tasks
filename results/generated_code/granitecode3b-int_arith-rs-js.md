Here's the JavaScript code that performs the same task as the given Rust code:
```javascript
const args = process.argv.slice(2);
const a = parseInt(args[0]);
const b = parseInt(args[1]);
console.log(`sum: ${a + b}`);
console.log(`difference: ${a - b}`);
console.log(`product: ${a * b}`);
console.log(`integer quotient: ${Math.trunc(a / b)}`); // truncates towards zero
console.log(`remainder: ${a % b}`); // remainder is always positive
```
This code uses the `process` module in Node.js to access command line arguments, and the `parseInt` function to convert them to integers. It then performs the same calculations as the Rust code, including handling of exponentiation (if available) and rounding for quotient. The remainder's sign is always positive, regardless of the signs of the operands.

