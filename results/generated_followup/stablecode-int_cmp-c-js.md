The error `SyntaxError: Unexpected token ')` is occurring because the closing parenthesis `)` is unbalanced in your JavaScript code. 

To fix this issue, you need to add a matching opening parenthesis `(` before each condition `if`. Additionally, ensure that you place semicolons at the end of each statement.

Here's the corrected JavaScript code:
```js
let a = parseInt(prompt("Enter first integer:")),
    b = parseInt(prompt("Enter second integer:")));

if (a < b) {
  console.log(`${a} is less than ${b}.`);
} else if (a === b) {
  console.log(`${a} is equal to ${b}.`);
} else if (a > b) {
  console.log(`${a} is greater than ${b}.`);
}
```
This corrected code now properly balances the opening and closing parentheses, ensuring that your JavaScript code runs correctly without any syntax errors.
