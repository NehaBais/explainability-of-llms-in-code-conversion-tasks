 Here's the JavaScript version of your C code:

```JavaScript
var readline = require('readline');
var rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter first integer: ", function(a) {
  a = parseInt(a);
  rl.question("Enter second integer: ", function(b) {
    b = parseInt(b);
    
    if (a < b)
      console.log(a + " is less than " + b);
      
    if (a == b)
      console.log(a + " is equal to " + b);
      
    if (a > b)
      console.log(a + " is greater than " + b);
    
    rl.close();
  });
});
```
You may run this JavaScript code with a Node.js environment such as the command line or any other integrated development environments supporting Node.js. 

The `readline` module allows you to read input from user's console, hence it is used here for getting two integers as inputs from users. The `rl.question()` function is used to get a question from the user and then handle the response in a callback function passed to this method.
