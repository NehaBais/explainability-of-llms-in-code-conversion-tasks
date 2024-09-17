Here's the converted code from Java to JavaScript:
```
const readline = require('readline');
const rl = readline.createInterface({
 input: process.stdin,
 output: process.stdout
});
rl.question('Enter first integer: ', (nbr1) => {
 rl.question('Enter second integer: ', (nbr2) => {
 nbr1 = parseInt(nbr1);
 nbr2 = parseInt(nbr2);
 if(nbr1 < nbr2) {
 console.log(`${nbr1} is less than ${nbr2}`);
 } else if(nbr1 > nbr2) {
 console.log(`${nbr1} is greater than ${nbr2}`);
 } else {
 console.log(`${nbr1} is equal to ${nbr2}`);
 }
 rl.close();
 });
});
```
To test the condition, you can use different integer inputs and compare the output with the expected result:
```
Enter first integer: 5
Enter second integer: 3
5 is greater than 3
Enter first integer: 3
Enter second integer: 5
3 is less than 5
Enter first integer: 5
Enter second integer: 5
5 is equal to 5
```

