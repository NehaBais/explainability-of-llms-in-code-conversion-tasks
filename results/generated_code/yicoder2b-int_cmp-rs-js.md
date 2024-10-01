This code cannot be directly converted to JavaScript because JavaScript does not natively support input from the command line like Rust does. However, you can simulate it with an array in your console or terminal. Here's how you could rewrite this in JavaScript:

```javascript
let readline = require('readline');
let rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question("Enter first number: ", function(answer1) {
  let a = parseInt(answer1);

  rl.question("Enter second number: ", function(answer2) {
    let b = parseInt(answer2);

    if (a < b) {
      console.log(`${a} is less than ${b}`);
    } else if (a == b){ 
        console.log(`${a} equals to ${b}`); 
    } else if (a > b) {
        console.log(`${a} is greater than ${b}`);
    };

  rl.close();
});
```
This script will prompt the user for input on two separate lines, then print a message based on whether the first number is less than, equal to or greater than the second number.
