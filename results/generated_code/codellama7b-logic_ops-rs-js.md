Sure! Here's the converted code in JavaScript:
```javascript
function booleanOps(a, b) {
    console.log(`${a} and ${b} -> ${a && b}`);
    console.log(`${a} or ${b} -> ${a || b}`);
    console.log(`${a} xor ${b} -> ${a ^ b}`);
    console.log(`not ${a} -> ${!a}`);
}

function main() {
    booleanOps(true, true);
    booleanOps(true, false);
    booleanOps(false, true);
    booleanOps(false, false);
}
```
Note that in JavaScript, `&&` and `||` are used for logical "and" and "or" operations, respectively. The `^` operator is used for bitwise XOR (exclusive or). Additionally, the `!` operator is used to negate a boolean value.
