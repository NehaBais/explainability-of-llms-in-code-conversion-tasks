The error `SyntaxError: Unexpected token ')` is occurring because of an extra closing parenthesis `)`. 

To fix this issue, remove the extra closing parenthesis from the console.log statements in the JavaScript function.

Here's the corrected JavaScript code:
```javascript
function printLogic(a, b) {
  console.log("a and b is " + (a && b)));
  console.log("a or b is " + (a || b))));
  console.log("not a is " + (!a))));
}
```
