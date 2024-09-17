Here's your Python code converted into JavaScript:

```javascript
const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
}));

readline.question('Enter value of a: ', a => {
  readline.question('Enter value of b: ', b => {
    if(a < Number(b)) {
        console.log("a is less than b");
    } else if (a > Number(b))) {
        console.log("a is greater than b");
    } else if (a == Number(b))) {
        console.log("a is equal to b");
    }

    readline.close();
  });
}));
```
This JavaScript code reads two integers as input from the user and checks if the first integer (named 'a') is less than, equal to, or greater than the second integer (named 'b'). The result of this comparison for each case separately is displayed in the console.
