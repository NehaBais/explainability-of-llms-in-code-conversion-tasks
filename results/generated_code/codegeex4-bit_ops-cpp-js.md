Here is the equivalent JavaScript code:

```javascript
function bitwise(a, b)
{
    console.log("a and b: ", (a & b));
    console.log("a or b:  ", (a | b));
    console.log("a xor b: ", (a ^ b));
    console.log("not a:   ", (~a));

    // Note: the JavaScript shift operators are not guaranteed to work if the shift count (that is, b)
    // is negative, or is greater or equal to the number of bits in the integer being shifted.
    console.log("a shl b: ", (a << b));
    console.log("a shr b: ", (a >> b));  // typically arithmetic right shift, but not guaranteed
    let ua = a >>> 0; // logical right shift (guaranteed)
    console.log("a lsr b: ", ua >>> b);
    
    // The rotate function works for all rotation amounts, but the integer being rotated must always be an
    // unsigned integer.
    console.log("a rol b: ", ((ua << b) | (ua >>> (32 - b))) & 0xFFFFFFFF);
    console.log("a ror b: ", ((ua >>> b) | (ua << (32 - b))) & 0xFFFFFFFF);
}
```

Note:
1. JavaScript does not have a built-in rotate function for integers. So, we have to simulate it manually.
2. The `>>>` operator in JavaScript is the unsigned right shift operator. It shifts the bits of the number to the right and fills in zeros on the left side.
3. When rotating, the value is ANDed with `0xFFFFFFFF` (`4294967295`) to ensure that it's represented as an unsigned 32-bit integer. This is necessary because JavaScript uses IEEE 754 standard for floating-point arithmetic which might interpret the number differently than you would expect when working with bitwise operations.
4. The `b` parameter of shift and rotate functions should be a non-negative integer less than the length of the number in bits, usually it is less than 32.
