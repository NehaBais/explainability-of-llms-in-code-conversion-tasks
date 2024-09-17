```javascript
const a = parseInt(prompt("Enter first integer:"));
const b = parseInt(prompt("Enter second integer:"));

console.log(`a+b = ${a + b}`);
console.log(`a-b = ${a - b}`);
console.log(`a*b = ${a * b}`);
console.log(`a/b = ${Math.floor(a / b)}, remainder ${a % b}`);
```

**Explanation:**

* `parseInt()` function is used to convert user input (strings) to integers.
* `Math.floor()` function is used to get the integer quotient, rounding towards zero.
* The modulo operator (`%`) calculates the remainder, and its sign matches the sign of the first operand.
