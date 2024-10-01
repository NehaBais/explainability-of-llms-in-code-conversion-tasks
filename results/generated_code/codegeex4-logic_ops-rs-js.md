Here is the JavaScript equivalent of your Rust code:

```javascript
function booleanOps(a, b) {
    console.log(`${a} and ${b} -> ${a && b}`);
    console.log(`${a} or ${b} -> ${a || b}`);
    console.log(`${a ^ b} xor ${b} -> ${a ^ b}`);
    console.log(`not ${a} -> ${!a}`);
}

function main() {
    booleanOps(true, true);
    booleanOps(true, false);
    booleanOps(false, true);
    booleanOps(false, false)
}
```

Please note that JavaScript uses `&&` for logical AND and `||` for logical OR operations. The bitwise XOR operator is represented as `^`. For negation in JavaScript, we use the exclamation point (`!`).
