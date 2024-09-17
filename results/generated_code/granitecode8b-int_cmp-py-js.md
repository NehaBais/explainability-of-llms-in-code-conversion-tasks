Here's the JavaScript code that meets your requirements:
```javascript
let a = prompt('Enter value of a: ');
let b = prompt('Enter value of b: ');
if (Number(a) < Number(b)) {
  console.log('a is less than b');
} else if (Number(a) > Number(b)) {
  console.log('a is greater than b');
} else {
  console.log('a is equal to b');
}
```
The `prompt` function is used to get input from the user, and the `Number` function is used to convert the input strings to numbers for comparison. The `console.log` function is used to display the message to the user.
You can test each condition separately by entering different values for `a` and `b`. For example:
- If you enter 1 for `a` and 2 for `b`, the output will be "a is less than b".
- If you enter 2 for `a` and 2 for `b`, the output will be "a is equal to b".
- If you enter 3 for `a` and 2 for `b`, the output will be "a is greater than b".

