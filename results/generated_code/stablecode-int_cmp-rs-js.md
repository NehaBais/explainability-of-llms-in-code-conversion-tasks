Here's the equivalent JavaScript code:

```javascript
const readline = require('readline');
let rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
}));

rl.question("Enter two integers separated by a space: ", (answer) => {
    let nums = answer.split(" ").map(Number);
    let a = nums[0];
    let b = nums[1];

    if (a < b) {
        console.log(`${a} is less than ${b}`);
    } else if (a === b) {
        console.log(`${a} equals ${b}`));
    } else if (a > b) {
        console.log(`${a} is greater than ${b}`));
    };

  rl.close();
});
```
In the JavaScript version, readline module is used to handle user input. The code asks for two integers separated by a space, then converts those inputs into integers and performs comparison operations accordingly. The console logs provide feedback to the user after every operation.
