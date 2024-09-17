This is a bit tricky to convert directly because the `Integer.rotateLeft` and `Integer.rotateRight` methods are not available in JavaScript out of the box (although they can be polyfilled if needed). However, you can achieve similar results using bitwise operators (`<<`, `>>`, `>>>`, `~`).

Here is a JavaScript version of the above code:

```javascript
function bitwise(a, b) {
  console.log("a AND b: " + (a & b));
  console.log("a OR b: " + (a | b));
  console.log("a XOR b: " + (a ^ b));
  console.log("NOT a: " + (~a));
  console.log("a << b: " + (a << b)); // left shift
  console.log("a  >> b: " + (a >> b)); // arithmetic right shift
  console.log("a  >>> b: " + (a >>> b)); // logical right shift
  console.log("a rol b: " + rotateLeft(a, b)); //rotate left
  console.log("a ror b: " + rotateRight(a, b)); //rotate right
}

function rotateLeft(n, bits) {
    return (n << bits) | (n >>> (32 - bits)) & 0xffffffff;
}

function rotateRight(n, bits) {
    return (n >>> bits) | (n << (32 - bits)) & 0xffffffff;
}
```

Please note that the above implementation assumes a 32-bit integer range. If you are using different types of integers, adjust the shift amounts accordingly to fit your needs.
