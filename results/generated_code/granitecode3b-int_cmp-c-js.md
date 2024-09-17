Sure! Here's the equivalent JavaScript code for your requirements:
```javascript
let a = parseInt(prompt("Enter first integer:"));
let b = parseInt(prompt("Enter second integer:"));

if (a < b) {
 console.log(`${a} is less than ${b}`);
} else if (a == b) {
 console.log(`${a} is equal to ${b}`);
} else {
 console.log(`${a} is greater than ${b}`);
}
```
This code uses the `parseInt` function to read in two integers from the user, and then uses an `if-else if-else` statement to compare them and display the appropriate message based on the result of each comparison. The `prompt` function is used to display a dialog box with a prompt message asking the user for input.

