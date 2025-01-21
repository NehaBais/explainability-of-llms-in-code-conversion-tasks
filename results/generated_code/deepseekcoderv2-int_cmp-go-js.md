 Here's the equivalent JavaScript code for the provided Go code:

```javascript
const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question("Enter number: ", (n1) => {
  n1 = parseInt(n1, 10); // Convert the string to an integer
  rl.question("Enter another number: ", (n2) => {
    n2 = parseInt(n2, 10); // Convert the string to an integer
    if (isNaN(n1) || isNaN(n2)) {
      console.log("Please enter valid numbers.");
    } else {
      switch (true) {
        case n1 < n2:
          console.log(`${n1} less than ${n2}`);
          break;
        case n1 === n2:
          console.log(`${n1} equal to ${n2}`);
          break;
        case n1 > n2:
          console.log(`${n1} greater than ${n2}`);
          break;
        default:
          console.log("Invalid input.");
      }
    }
    rl.close();
  });
});
```

This JavaScript code uses the `readline` module to get user input and then performs the comparisons using a switch statement, similar to the Go code you provided.
