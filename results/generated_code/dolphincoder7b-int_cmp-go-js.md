Sure, here's the JavaScript code that corresponds to the provided Golang code:
```javascript
const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
rl.question('Enter first number: ', (n1) => {
    rl.question('Enter second number: ', (n2) => {
        if(n1 < n2){
            console.log(`${n1} less than ${n2}`);
        }else if(n1 == n2){
            console.log(`${n1} equal to ${n2}`);
        }else{
            console.log(`${n1} greater than ${n2}`);
        }
        rl.close();
    });
});
```
In this code, we use the `readline` module from Node.js to get user input and interact with it like we would in a terminal or command line interface (CLI). We then use an asynchronous method called `rl.question()` to prompt the user for input. When the user enters input, our callback function is triggered with the entered value as an argument.
Using this module allows us to gather user input and perform comparisons based on that information.
