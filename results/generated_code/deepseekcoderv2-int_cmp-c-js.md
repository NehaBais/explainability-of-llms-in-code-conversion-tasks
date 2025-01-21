 Sure! Here's the equivalent JavaScript code that performs the same operations as your C code:

```javascript
const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Enter two integers (separated by a space): ', (input) => {
  const [a, b] = input.split(' ').map(Number);

  if (a < b) {
    console.log(`${a} is less than ${b}`);
  } else if (a === b) {
    console.log(`${a} is equal to ${b}`);
  } else {
    console.log(`${a} is greater than ${b}`);
  }

  rl.close();
});
```

This JavaScript code uses the `readline` module to get input from the user, then it splits the input into two integers and compares them using if-else statements to determine if one integer is less than, equal to, or greater than the other.
