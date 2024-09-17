Here's the JavaScript equivalent of your C code:

```JavaScript
let a = parseInt(prompt("Enter the first integer"));
let b = parseInt(prompt("Enter the second integer"));

if (a < b) {
    console.log(`${a} is less than ${b}`);
} 

if (a === b) {
    console.log(`${a} is equal to ${b}`);
}

if (a > b) {
    console.log(`${a} is greater than ${b}`);
}
```
This code uses prompt() function in JavaScript to get two integers from the user, then it prints a message depending on whether the first integer is less than, equal to or greater than the second one using three if statements with comparison operators: "<", "===" and ">". Note that parseInt() function used here for converting string input value into an integer.

