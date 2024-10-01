The equivalent JavaScript code for the given Python code would be as follows: 

```javascript
// Getting integer inputs from user
var a = prompt("Enter value of a:");
var b = prompt("Enter value of b:");

// Comparing the numbers
if (a < b) {
    console.log('a is less than b');
} else if (a > b) {
    console.log('a is greater than b');
} else if (a === b) {
    console.log('a is equal to b');
}
```
This code uses the `prompt()` function to get user input, which is used in place of Python's `input()`. The comparison operators are similar in their syntax. However, note that `==` checks for equality and not strict equality while `===` does both.
