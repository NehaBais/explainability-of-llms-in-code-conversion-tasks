```
// JavaScript code
const readline = require('readline-sync');

function main() {
  let num1 = parseInt(readline.question('Enter the first number: '));
  let num2 = parseInt(readline.question('Enter the second number: '));

  if (num1 < num2) {
    console.log(`${num1} is less than ${num2}`);
  } else if (num1 === num2) {
    console.log(`${num1} equals ${num2}`);
  } else if (num1 > num2) {
    console.log(`${num1} is greater than ${num2}`);
  }
}
main();
```
This code uses the `readline-sync` package to read input from the user and parse it into integers using `parseInt()`. The `if` statements are used to check which comparison operator is true for the given numbers. The comparison operators are checked in the following order: less than, equal to, and greater than. If none of these conditions are true, the code will display an error message.
