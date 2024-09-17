This code has been successfully converted to JavaScript. Here's the translated version of your C code:

```javascript
let a = 0, b = 0;
const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
});
readline.question("Enter two integers: ", (input) => {
    const inputs = input.split(" ");
    a = parseInt(inputs[0]);
    b = parseInt(inputs[1]);

    if (a < b) console.log(`${a} is less than ${b}`);
    if (a === b) console.log(`${a} is equal to ${b}`);
    if (a > b) console.log(`${a} is greater than ${b}`);
  
    readline.close();
});
```

This JavaScript program uses the `readline` module to take input from the user and outputs messages based on the comparison between two integers. Note that, unlike in C where an integer can be assigned as a boolean value (0 or 1), in JavaScript, booleans are primitive data types (`true` or `false`) and don't have corresponding numerical representations.
