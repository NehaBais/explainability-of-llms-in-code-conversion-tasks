This is the JavaScript version of your Golang code:
```javascript
let n1 = Number(prompt('Enter number: '));
let n2 = Number(prompt('Enter number: '));

if (n1 < n2) {
    console.log(`${n1} is less than ${n2}`);
} else if (n1 > n2) {
    console.log(`${n1} is greater than ${n2}`);
} else {
    console.log(`${n1} is equal to ${n2}`);
}
```
This code prompts the user for two numbers, then checks which number is either less than, equal to or greater than the other. It uses `prompt` function for console based user input in JavaScript and `console.log` for output on the console.
