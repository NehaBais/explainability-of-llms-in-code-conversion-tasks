Here is the JavaScript equivalent of your Rust code:

```javascript
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
Note: In JavaScript, the `^` operator is not used for logical XOR. Instead, you can use `(a && !b) || (!a && b)` to emulate this operation.
