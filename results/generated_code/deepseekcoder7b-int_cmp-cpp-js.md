Here's the JavaScript equivalent of your C++ code:

```javascript
let a = parseInt(prompt("Enter the first integer"));
let b = parseInt(prompt("Enter the second integer"));

// test for less-than
if (a < b) {
  console.log(`${a} is less than ${b}.`);
}

// test for equality
if (a === b) {
  console.log(`${a} is equal to ${b}.`);
}

// test for greater-than
if (a > b) {
  console.log(`${a} is greater than ${b}.`);
}
```
The `prompt()` function in JavaScript works similar to the `cin` statement in C++, it prompts a message and allows you to input an integer from user. Also note that, "===" operator checks for strict equality (value and type) which is used instead of "==". In JavaScript, ">", "<", ">=", "<=", "==" and "!=" are all used as comparison operators.

