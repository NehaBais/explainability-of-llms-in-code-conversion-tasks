Sure, here's the JavaScript equivalent code:

```javascript
// Get user input for two integers
let a = prompt('Enter value of a:');
let b = prompt('Enter value of b:');

// Compare the two numbers and display appropriate message based on the condition
if (a < b) {
    alert('a is less than b');
} else if (a > b) {
    alert('a is greater than b');
} else if (a == b) {
    alert('a is equal to b');
}
```

Please note that JavaScript uses `alert` function for displaying messages to the user. Also, it's a good practice to use `prompt` function for getting user input in browser environment while using Node.js, you should use `readline-sync` module.

Before running this code, make sure to install `readline-sync` by running the command `npm install readline-sync`.
