
Here's the code in JavaScript:

```
let userInput = prompt("Enter two integers");
let [a, b] = userInput.split(' ').map(x => parseInt(x));

if (a < b) {
  console.log(`${a} is less than ${b}`);
} else if (a == b) {
  console.log(`${a} is equal to ${b}`);
} else if (a > b) {
  console.log(`${a} is greater than ${b}`);
}
```
Note: In JavaScript, we use `let` instead of `int` and `parseFloat()` instead of `scanf()`. Also, we use the `map()` function to split the user input into two integers.
