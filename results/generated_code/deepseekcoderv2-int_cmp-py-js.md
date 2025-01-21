 Sure, here is the equivalent JavaScript code for your Python script:

```javascript
let a = prompt('Enter value of a: ');
let b = prompt('Enter value of b: ');

if (parseInt(a) < parseInt(b)) {
    console.log('a is less than b');
} else if (parseInt(a) > parseInt(b)) {
    console.log('a is greater than b');
} else if (parseInt(a) == parseInt(b)) {
    console.log('a is equal to b');
}
```

This JavaScript code uses the `prompt` function to get input from the user, and then it parses the inputs as integers using `parseInt`. It then checks the conditions and logs a message accordingly.
