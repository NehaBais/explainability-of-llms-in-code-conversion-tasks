Here's the JavaScript equivalent of your C code:

```javascript
let A = prompt("Enter the first integer");
A = parseInt(A);

let b = prompt("Enter the second integer");
b = parseInt(b);

if (A < b) {
    alert(`${A} is less than ${b}`);
} else if (A == b) {
    alert(`${A} is equal to ${b}`);
} else {
    alert(`${A} is greater than ${b}`);
}
```

This JavaScript code prompts the user for two integers, converts them to numbers using `parseInt`, and then checks each condition. If a condition is met, an alert pops up with the corresponding message.
