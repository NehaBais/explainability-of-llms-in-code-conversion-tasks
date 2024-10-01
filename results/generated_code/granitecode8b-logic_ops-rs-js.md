Here's the equivalent code in JavaScript:
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
booleanOps(false, false);
```
This code defines a function `booleanOps` that takes two arguments `a` and `b`, which are boolean values. It then uses logical operators to perform the "and", "or", "xor" and "not" operations on these values, and prints the results using `console.log()`. The main function then calls this `booleanOps` function with different argument combinations to test its output.

