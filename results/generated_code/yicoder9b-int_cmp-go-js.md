Here is the equivalent JavaScript code for your requirement.
Please note that prompt() function in JavaScript can only get strings as input. So to compare two numbers we need to convert them from string to number using Number() function. 

```javascript
let n1 = Number(prompt('Enter first number: '));
let n2 = Number(prompt('Enter second number: '));

if (n1 < n2) {
    console.log(`${n1} is less than ${n2}`);
} else if (n1 == n2) {
    console.log(`${n1} is equal to ${n2}`);
} else  { 
    console.log(`${n1} is greater than ${n2}`);
}
```
