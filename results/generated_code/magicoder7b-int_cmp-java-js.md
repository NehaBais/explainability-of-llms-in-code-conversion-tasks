 Here's the JavaScript version of your Java code:

```JavaScript
const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
});

let nbr1; let nbr2;

// Read two numbers from user
readline.question('Enter the first number: ', (input) => {
  nbr1 = parseInt(input);
  readline.question('Enter the second number: ', (input) => {
    nbr2 = parseInt(input);

    // Display messages based on comparison operators
    if(nbr1<nbr2){
      console.log(nbr1 + " is less than " + nbr2);
    } 
    if(nbr1>nbr2){
      console.log(nbr1 + " is greater than " + nbr2);
    } 
    if(nbr1===nbr2){
      console.log(nbr1 + " is equal to " + nbr2);
    } 
    readline.close(); // Close the readline interface
  });
});
```

This JavaScript version uses Node.js's built-in `readline` module, which provides a more convenient way for getting input from users in command line scripts. Please note that you need to run this code with Node.js runtime environment.
