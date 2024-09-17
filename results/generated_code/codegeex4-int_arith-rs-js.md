Here is the JavaScript version of your code:

```javascript
// Get the command line arguments
let args = process.argv.slice(2);
let a = parseInt(args[0]);
let b = parseInt(args[1]);

console.log("sum:              " + (a + b));
console.log("difference:       " + (a - b));
console.log("product:          " + (a * b));
console.log("integer quotient: " + Math.floor(a / b)); // truncates towards zero
console.log("remainder:        " + a % b); // same sign as first operand
```

In JavaScript, the `parseInt` function is used to convert a string into an integer. It's different from the Rust code where the `parse::<i32>` method was used.

Similarly, in place of the `/` operator for division and `%` for modulus in Rust, JavaScript uses the same operators. For the integer division or quotient part, JavaScript does not automatically truncate towards zero; instead, it rounds the floating-point result down to an integer using `Math.floor`.

Please note that this code doesn't perform any error handling. If you run this script from a command line and provide arguments that aren't integers, this will throw an error.
