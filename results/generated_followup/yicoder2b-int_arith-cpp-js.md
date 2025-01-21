This issue is related to JavaScript's syntax rules, not about the conversion from C++ to JavaScript. The expected output of `(parseFloat(a)/parseFloat(b) | 0)` doesn't make sense in JavaScript. It performs integer division of two floating point numbers (or both are integers, but they are not necessarily integers) and returns an integer value. JavaScript doesn’t have a built-in rounding function for performing different types of rounding (e.g. towards zero, towards negative infinity, etc.) or whether the sign of the remainder is the same as one of the operands.

Here's how you can correct it:

```js
let a = parseFloat(require('readline').createInterface({ input: process.stdin }).promisify("readline").question('Enter first number: '));
let b = parseFloat(require('readline').createInterface({ input: process.stdin }).promisify("readline").question('Enter second number: '));
console.log(`a+b = ${a + b}`);
console.log(`a-b = ${a - b}`);
console.log(`a*b = ${a * b}`);
let quotient = Math.floor(a / b);
let remainder = a % b;
if (remainder < 0) {
    console.log(`a/b = ${-quotient}, remainder -${(-remainder)}`);
} else {
    console.log(`a/b = ${quotient}, remainder ${remainder}`);
}
```
This JavaScript code now performs floating point division and also handles the rounding and sign of the remainder correctly.
