Here's the JavaScript code that meets your requirements:
```
console.log("Enter two integers:");
let a = parseInt(prompt());
let b = parseInt(prompt());
console.log(`a+b = ${a+b}`);
console.log(`a-b = ${a-b}`);
console.log(`a*b = ${a*b}`);
console.log(`a/b = ${Math.floor(a/b)}, remainder ${a%b}`);
```
Note that the `Math.floor()` function is used to get the integer quotient, which rounds towards negative infinity. If you want to round towards zero or towards positive infinity, you can use `Math.ceil()` or `Math.round()`, respectively. Also, since the remainder operator `%` in JavaScript returns a floating-point number, it may not always have the same sign as the operands.

