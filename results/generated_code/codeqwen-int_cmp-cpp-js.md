Here's the JavaScript version of your C++ code:
```javascript
let A, b;

A = parseInt(prompt("Enter first Integer"));
b = parseInt(prompt("Enter Second Integer"));

// test for less-than
if (A < b) {
  console.log(A + " Is less than " + b);
}

// test for equality
if (A === b) {
  console.log(A + " Is equal to " + b);
}

// test for greater-than
if (A > b) {
  console.log(A + " Is greater than " + b);
}
```
In this JavaScript code, we use the `prompt()` function to get two integers from the user. We then compare these integers using the same three comparison operators as in your C++ code: less-than, equality, and greater-than. If the condition is true for any operator, we display a message indicating which operator was used. Note that in JavaScript, `===` is used instead of `==` to check for strict equality (which means both type and value must be the same).
