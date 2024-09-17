Here's the equivalent JavaScript code:

```javascript
// Get two integers from the user.
const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin, output: process.stdout })

rl.question('Enter first integer: ', (nbr1) => {

    rl.question('Enter second integer: ', (nbr2) => {
  
        // Convert the string inputs to integers.
        const intNbr1 = parseInt(nbr1);
        const intNbr2 = parseInt(nbr2);
  
        if(intNbr1<intNbr2))
            console.log(`${intNbr1} is less than ${intNbr2}`));

        if(intNbr1>intNbr2)
           console.log(`${intNbr1} is greater than ${intNbr2}`));

        if(intNbr1==intNbr2)
           console.log(`${intNbr1} is equal to ${intNbr2}`));

        rl.close();
    });
})
```
This code uses Node.js readline module for user input and then checks the condition separately for each case i.e., less than, equals to and greater than second integer. It also makes sure to close the readline interface properly.
