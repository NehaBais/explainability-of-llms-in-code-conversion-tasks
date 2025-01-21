Here's how you can convert the given Java code into JavaScript:
```javascript
const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question('Enter first number: ', (answer1) => {
  rl.question('Enter second number: ', (answer2) => {
    const nbr1 = parseInt(answer1);
    const nbr2 = parseInt(answer2);

    if(nbr1 < nbr2)
      console.log(`${nbr1} is less than ${nbr2}`);

    if(nbr1 > nbr2)
      console.log(`${nbr1} is greater than ${nbr2}`);

    if(nbr1 === nbr2)
      console.log(`${nbr1} is equal to ${nbr2}`);

    rl.close();
  });
});
```
This JavaScript code will prompt the user for two integers and then compare them, displaying a message indicating whether each integer is less than, equal to or greater than the other. The comparison operators `<=`, `>=` are not used in this code as they were in the original Java code.

Note that the readline module from Node.js is used to read the user input asynchronously. For running this JavaScript script, you need to have Node.js installed on your machine.
