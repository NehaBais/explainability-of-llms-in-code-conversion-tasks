Here's the converted code from C++ to JavaScript:
```javascript
let a, b;
if ((a = parseInt(prompt("Enter first integer:"))) && (b = parseInt(prompt("Enter second integer:")))) {
  if (a < b) {
    console.log(`${a} is less than ${b}`);
  } else if (a == b) {
    console.log(`${a} is equal to ${b}`);
  } else {
    console.log(`${a} is greater than ${b}`);
  }
} else {
  console.error("Could not read the numbers");
}
```
In this code, we use `parseInt()` method to get user input as an integer. We also check if both inputs are valid integers using logical AND (`&&`) operator. 
Next, we use conditional statements (`if`, `else if`, and `else`) to check for the conditions - less than, equal to, or greater than. 
Finally, we print out the result using `console.log()` method. If any of the inputs are not valid integers, we display an error message using `console.error()`.

