Sure, here's the JavaScript code that performs the same calculations as above:
```javascript
let a = parseInt(prompt("Please enter a number"));
let b = parseInt(prompt("Please enter another number"));
console.log(`a+b = ${a + b}`);
console.log(`a-b = ${a - b}`);
console.log(`a*b = ${a * b}`);
console.log(`a/b = ${Math.floor(a / b)}, remainder ${a % b}`);
```
This code prompts the user to enter two numbers and then performs the calculations. The `parseInt()` function is used to convert the input string into a number, while `prompt()` is used for displaying prompts to the user. The JavaScript `Math` object provides various mathematical functions like `floor()`, which rounds down to the nearest integer.
