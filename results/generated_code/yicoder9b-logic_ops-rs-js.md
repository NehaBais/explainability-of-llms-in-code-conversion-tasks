Here is the equivalent JavaScript code for your Rust function:

```JavaScript
function booleanOps(a, b) {
  console.log(`${a} and ${b} -> ${a && b}`);
  console.log(`${a} or ${b} -> ${a || b}`);
  // XOR operation in JavaScript can be done by the following method
  console.log(`${a} xor ${b} -> ${ (a || b) && !(a && b)}`);
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
Please note that JavaScript does not natively support a XOR operator for boolean values. It can be achieved through a combination of the || (or) and && (and) operators.
