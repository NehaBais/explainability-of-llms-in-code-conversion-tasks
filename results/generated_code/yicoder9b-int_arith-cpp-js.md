In JavaScript, you can use the `prompt` function to get user input and `console.log` or `alert` for displaying output on web pages. 

Here is how it can be done:

```javascript
let a = parseInt(prompt('Enter first integer'));
let b = parseInt(prompt('Enter second integer'));
  
console.log(`a+b = ${a+b}`);
console.log(`a-b = ${a-b}`);
console.log(`a*b = ${a*b}`);
// In JavaScript, the quotient rounds towards zero 
console.log(`a/b = ${Math.floor(a/b)} and remainder is ${a%b}`);  
```
The `parseInt` function is used to convert the user input from string to integer. The mathematical operations for addition (`+`), subtraction(`-`), multiplication(`*`) are same as in C++.

Integer division (quotient) rounds towards zero in JavaScript just like it does in C++. If you want to round down to the nearest whole number regardless of the sign, you can use `Math.floor()` function which rounds down. The remainder operator (`%`) works the same way as in C++ and its sign is always positive if both operands are positive or negative if both operands are negative.

However, for exponentiation (power), JavaScript provides a method Math.pow(a, b) that can be used where 'a' is base and 'b' is the exponent. Please note this has been added in ES6 (ECMAScript 2015) as an exponentiation operator (**), but it may not be supported in all browsers yet.
