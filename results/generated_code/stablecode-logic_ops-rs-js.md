Here is the equivalent JavaScript code:

```javascript
function booleanOps(a, b) {
  console.log(`${a} and ${b}} -> ${a && b}`);
  console.log(`${a} or ${b}} -> ${a || b}`);
  console.log(`${a} xor ${b}} -> ${!!(a ^ b)}}`);
  console.log(`not ${a}} -> ${!a}`);
}

booleanOps(true, true);
booleanOps(true, false);
booleanOps(false, true);
booleanOps(false, false);
```

This JavaScript code behaves the same way as the original Rust code. It defines a function `booleanOps` that takes two boolean values `a` and `b`, and logs the results of "and", "or", "xor", and "not" on both arguments. The main function then calls `booleanOps` with various combinations of true and false values.
