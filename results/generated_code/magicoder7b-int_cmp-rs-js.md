 Here's how you can convert the Rust code to JavaScript:

```javascript
const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});
let num1;
rl.question("Enter first number: ", (answer) => {
    num1 = parseInt(answer);
    rl.close();
});
rl.on('line', (answer) => {
    let num2 = parseInt(answer);
    if(num1 < num2){
        console.log(`${num1} is less than ${num2}`);
    } else if(num1 === num2){
        console.log(`${num1} equals ${num2}`);
    } else {
        console.log(`${num1} is greater than ${num2}`);
    };
    rl.close();
});
``` 

In this JavaScript code, we're using the readline module from Node.js to interact with the user in a more friendly way (asking for input instead of just printing it). The program will stop reading inputs after receiving two numbers. If num1 is less than num2, it prints "num1 is less than num2". If num1 equals num2, it prints "num1 equals num2", and if num1 is greater than num2, it prints "num1 is greater than num2".
