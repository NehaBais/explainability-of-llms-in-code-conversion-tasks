The equivalent code in JavaScript is as follows:

```javascript
function bitwise(a, b) {
    console.log('a and b: ', a & b);
    console.log('a or b: ', a | b);
    console.log('a xor b: ', a ^ b);
    console.log('not a: ', ~a);

    // Note: the JavaScript shift operators are not guaranteed to work if the shift count (that is, b)
    // is negative, or is greater or equal to the number of bits in the integer being shifted.
    console.log('a shl b: ', a << b);
    console.log('a shr b: ', a >> b);
    console.log('a lsr b: ', Math.floor(a / (2 ** b)));
    
    // Rotate functions
    let ua = a;
    console.log('a rol b: ', (ua >>> 0) | 0 - Math.floor((ua >>> 0) * (b % 32)));
    console.log('a ror b: ', (ua << b) | 0 - Math.floor(((ua & ((1 << b) - 1)) * ((1 << (32 - b)) / (1 << b)))));
}
```
This code performs the same operations as the C++ function. The `Math.floor` function is used to ensure that a negative shift count works correctly in JavaScript. Also, note that the bitwise operators and logical right shift operator are used for left shift in JavaScript.
