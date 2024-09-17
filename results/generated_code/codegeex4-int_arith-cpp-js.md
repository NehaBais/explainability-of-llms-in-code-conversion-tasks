Here is the equivalent JavaScript code:

```javascript
let a, b;
a = parseInt(prompt("Enter first number:"));
b = parseInt(prompt("Enter second number:"));

console.log(`a+b = ${a+b}`);
console.log(`a-b = ${a-b}`);
console.log(`a*b = ${a*b}`);
console.log(`a/b = ${Math.floor(a/b)}, remainder ${a%b}`);
```

Note:
- The `prompt()` function is used to get input from the user.
- JavaScript uses `parseInt()` instead of C++'s `std::cin`.
- The `Math.floor()` function is used to simulate integer division in JavaScript, which works like rounding towards zero.
- The '%' operator, or modulus operator, calculates the remainder of a division operation. In this context, if `a` and `b` have different signs, then the sign of the remainder will be the same as that of `a`, not necessarily `b`. This is because when dealing with negative numbers in JavaScript, their remainders are calculated following the mathematical rules for dividing two integers.
