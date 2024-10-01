Here's the equivalent JavaScript code for your Go function:

```javascript
function printLogic(A, B) {
    console.log("A and B is " + (A && B));
    console.log("A or B is " + (A || B));
    console.log("not A is " + !A);
}

printLogic(true, false);  // Test the function
```

In JavaScript, boolean values are represented as `true` and `false`, which corresponds to `1` and `0` in Go respectively. The `&&` operator in JavaScript is equivalent to `&&` in Go, while `||` in JavaScript corresponds to `||` in Go. Lastly, the `!` operator does exactly what your Go function does, negating a boolean value. 

You can test this function by calling it with a couple of true/false pairs as arguments. The commented line at the bottom is an example call that demonstrates how you might use the function.
