Here's the JavaScript equivalent of your Rust code:

This uses Node.js `readline` module to read from input in a promise-based manner.

```javascript
const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let nums = [];
rl.on('line', (input) => {
    nums.push(parseInt(input));
    if (nums.length === 2) rl.close();
}).on('close', () => {
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
This JavaScript code works similarly to your Rust code: it reads two integers from the user, and then checks which operator each number pair fits into (less than, equals, or greater than), printing a relevant message for each case. It uses Node's `readline` module to get input line by line.

