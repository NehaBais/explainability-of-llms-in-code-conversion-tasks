Here's how you can convert the given Rust code to JavaScript:
```javascript
const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let inputs = [];

rl.question("Enter two integers:\n", (answer) => {
  const nums = answer.split('\n').map(Number);
  
  let a = nums[0];
  let b = nums[1];
  
  if (a < b) {
    console.log(`${a} is less than ${b}`);
  } else if (a === b) {
    console.log(`${a} equals ${b}`);
  } else if (a > b) {
    console.log(`${a} is greater than ${b}`);
  }
  
  rl.close();
});
```
In this JavaScript code, we use the readline module to take input from the user. The user inputs two integers, which are separated by a newline character ('\n'), and then converted to an array of numbers using map(Number). Then, we store these numbers in variables `a` and `b`, and perform comparison operations just like in the original Rust code.
