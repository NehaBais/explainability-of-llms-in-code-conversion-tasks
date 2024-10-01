In JavaScript we will use the `prompt` function to get input from user and `alert` function to show output.

The equivalent code in JavaScript would look like this:

```javascript
let a = prompt("Enter first number:"); 
a = parseInt(a); //convert string input into integer

let b = prompt("Enter second number:");
b = parseInt(b); // convert string input into integer

if (a < b) {
  alert(`${a} is less than ${b}`); 
}
else if (a == b) {
  alert(`${a} is equal to ${b}`);
} 
else {
  alert(`${a} is greater than ${b}`);
}
```
Please note that the `prompt` function returns a string, so we need to convert it into integer using `parseInt()`.
The `${}` syntax is used for embedding variables in strings (string interpolation).
