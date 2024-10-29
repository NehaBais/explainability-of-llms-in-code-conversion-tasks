Here is the equivalent JavaScript code for your Rust program. I'm using console.log to print out values instead of println! in Rust as there's no direct equivalent in JavaScript. 

```javascript
function booleanOps(a, b) {
    console.log(a + " and " + b + " -> " + (a && b));
    console.log(a + " or " + b + " -> " + (a || b));
    // Javascript's ^ operator is equivalent to XOR in Rust, so we can use it directly
    console.log(a + " xor " + b + " -> " + (a ^ b));
    console.log("not " + a + " -> " + (!a));
}

booleanOps(true, true);
booleanOps(true, false);
booleanOps(false, true);
booleanOps(false, false);
```
This JavaScript code does the same thing as your Rust program: it defines a function `booleanOps` that prints out the results of applying logical operations (and, or, xor) to two boolean values and its negation. It then calls this function with four different pairs of boolean values.

