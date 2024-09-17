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