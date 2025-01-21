Here is the JavaScript equivalent of your Rust code:

```javascript
let a = parseInt(prompt("Enter the first number"));
let b = parseInt(prompt("Enter the second number"));

console.log(`sum:              ${a + b}`);
console.log(`difference:       ${a - b}`);
console.log(`product:          ${a * b}`);
console.log(`integer quotient: ${Math.floor(a / b)}`); // truncates towards zero
console.log(`remainder:        ${a % b}`); // same sign as first operand
```

Note:
- JavaScript doesn't have a direct equivalent to Rust's `env::args()`, so we're using the `prompt()` function to get user input. This means that if you want to run this code in an environment where `prompt()` is not available, like Node.js, you'll need to find another way of getting user input.
- JavaScript doesn't have a remainder operator for strings like Rust does, so we're using the modulus (`%`) operator instead.
- We use `Math.floor()` to truncate towards zero when calculating the quotient. This works because in JavaScript, when dividing two integers, it rounds down towards zero by default.
- The remainder has the same sign as the first operand, which is consistent with how the `%` operator works in JavaScript.

Please note that this code doesn't include error handling for non-integer input or division by zero.
