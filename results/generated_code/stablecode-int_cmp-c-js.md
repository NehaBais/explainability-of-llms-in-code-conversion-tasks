Here's the equivalent JavaScript code:

```javascript
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
This JavaScript code does the same thing as your C code: it prompts the user for two integers, compares them, and prints a message indicating how the first integer relates to the second one (less than, equal to, or greater than). The only difference here is that I've used `prompt()` function to get input from user, and also replaced `printf` with `console.log()`, as JavaScript doesn't have `printf` directly like C.
