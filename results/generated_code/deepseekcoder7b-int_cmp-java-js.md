In JavaScript, we don't have the same importing features as Java. We can use `prompt()` function to get inputs from user in browser environment or NodeJS prompt-sync package for console applications. Here is a JavaScript equivalent of your code using that:

```JavaScript
let nbr1 = parseInt(prompt("Enter the first number"));
let nbr2 = parseInt(prompt("Enter the second number"));

if (nbr1 < nbr2) {
    console.log(`${nbr1} is less than ${nbr2}`);
}

if (nbr1 > nbr2) {
    console.log(`${nbr1} is greater than ${nbr2}`);
}

if (nbr1 === nbr2) {
   console.log(`${nbr1} is equal to ${nbr2}`);
}
```
This code will prompt the user for two numbers, then it uses comparison operators to compare these numbers and print out a corresponding message on the console if first integer is less than or greater than second integer or equals to second. 

Please note that this code should be run in an environment where `prompt()` function can be used (like browser). If you're running it from NodeJS, you may need some additional packages for input/output functionality.

