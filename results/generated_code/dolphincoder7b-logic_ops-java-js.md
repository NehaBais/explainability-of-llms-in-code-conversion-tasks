```javascript
function logic(a, b) {
    console.log('a AND b: ' + (a && b));
    console.log('a OR b: ' + (a || b));
    console.log('NOT a: ' + (!a));
}
```
In JavaScript, we use `&&` for logical "and", `||` for logical "or", and `!` for logical "not". As JavaScript doesn't have a boolean type, we simply pass the boolean values as arguments to the function. We can then perform the operations on them and print the result.
