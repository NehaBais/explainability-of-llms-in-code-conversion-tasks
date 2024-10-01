Here's the equivalent JavaScript code for the given Rust function:
```
function booleanOps(a, b) {
    console.log(`${a} and ${b} -> ${a && b}`);
    console.log(`${a} or ${b} -> ${a || b}`);
    console.log(`${a} xor ${b} -> ${a ^ b}`);
    console.log(`not ${a} -> ${!a}`);
}
 
booleanOps(true, true);
booleanOps(true, false);
booleanOps(false, true);
booleanOps(false, false)
```
This code defines a function `booleanOps` that takes two boolean arguments and outputs the result of "and", "or", and "xor" operations on both arguments as well as the result of "not" operation on the first argument. The function is then called with four different sets of input values to demonstrate the functionality of the "and", "or", and "xor" operations.

