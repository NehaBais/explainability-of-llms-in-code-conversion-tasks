The error `SyntaxError: Unexpected token ')` is occurring because of an unbalanced parentheses in the JavaScript code. 

To fix this issue, we need to correct the syntax by properly closing the parentheses after each comparison operation.

Here's the corrected JavaScript code:

```js
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
    console.log(`${a} is less than ${b}`));
  } else if (a === b) {
    console.log(`${a} equals ${b}`));
  } else if (a > b) {
    console.log(`${a} is greater than ${b}`));
  };

  rl.close();
});
```

In the corrected code, we ensure that each comparison operation is properly enclosed in parentheses to maintain the correct syntax.
