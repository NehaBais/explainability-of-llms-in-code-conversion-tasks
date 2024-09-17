Here is the equivalent JavaScript code for your Python script:

```javascript
let A = prompt('Enter value of a: ');
let b = prompt('Enter value of b: ');

if (A < b) {
    console.log('A is less than b');
} else if (A > b) {
    console.log('A is greater than b');
} else if (A == b) {
    console.log('A is equal to b');
}
```

Note: JavaScript does not have a direct equivalent of Python's `input()` function for getting user input, so we use the `prompt()` function which displays an alert with a text field to get input from the user. Also, instead of the `print()` statement in Python, we use `console.log()`.
