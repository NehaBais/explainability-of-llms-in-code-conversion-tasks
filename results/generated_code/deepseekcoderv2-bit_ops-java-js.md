 Here's the JavaScript equivalent of the provided Java code:

```javascript
function bitwise(a, b) {
    console.log("a AND b:", a & b);
    console.log("a OR b:", a | b);
    console.log("a XOR b:", a ^ b);
    console.log("NOT a:", ~a);
    console.log("a << b:", a << b); // left shift
    console.log("a >> b:", a >> b); // arithmetic right shift
    console.log("a >>> b:", a >>> b); // logical right shift
    console.log("a rol b:", (a << 32) | (a >>> (32 - b)) & ((1 << 32) - 1)); // rotate left, assuming 32-bit integers
    console.log("a ror b:", (a >> 32) | (a << (32 - b)) & ((1 << 32) - 1)); // rotate right, assuming 32-bit integers
}
```

Note: In JavaScript, the `>>>` operator for logical right shift is not natively supported in older versions of ECMAScript. The code above assumes a 32-bit integer environment and uses bitwise operations to simulate the left and right rotations. If you are working with a different size of integers (e.g., 64-bit), you would need to adjust the shift and rotate calculations accordingly.
