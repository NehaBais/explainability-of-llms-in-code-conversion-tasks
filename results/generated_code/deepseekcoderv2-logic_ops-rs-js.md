 Sure! Here's the equivalent JavaScript code for the given Rust function and main logic:

```javascript
function booleanOps(a, b) {
    console.log(`${a} and ${b} -> ${a && b}`);
    console.log(`${a} or ${b} -> ${a || b}`);
    console.log(`${a} xor ${b} -> ${a !== b}`);
    console.log(`not ${a} -> ${!a}`);
}

function main() {
    booleanOps(true, true);
    booleanOps(true, false);
    booleanOps(false, true);
    booleanOps(false, false);
}

main();
```

In this JavaScript code:
- The `booleanOps` function takes two boolean arguments (`a` and `b`) and performs the logical operations.
- The expression `${a !== b}` is used to represent the XOR operation in JavaScript since there isn't a direct XOR operator for booleans like in Rust.
- The `main` function calls `booleanOps` with different combinations of boolean values, just like in the Rust code.
