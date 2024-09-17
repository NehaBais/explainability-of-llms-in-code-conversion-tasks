Here's the JavaScript code that accomplishes the same task as the Golang code you provided:
```javascript
function main() {
  let a = parseInt(prompt("Enter the first integer"));
  let b = parseInt(prompt("Enter the second integer"));

  console.log(`${a} + ${b} = ${a + b}`);
  console.log(`${a} - ${b} = ${a - b}`);
  console.log(`${a} * ${b} = ${a * b}`);
  console.log(`${a} / ${b} = ${Math.floor(a/b)}`); // truncates towards 0
  console.log(`${a} % ${b} = ${a % b}`); // remainder is always positive
  // no exponentiation operator
}
main();
```
In this JavaScript code, we use the `parseInt()` function to convert the user input from strings to integers. We then perform the four arithmetic operations using standard operators (`+`, `-`, `*`, `/`) and the `Math.floor()` function to round the result of the division towards zero. Finally, we output the results using `console.log()`.

