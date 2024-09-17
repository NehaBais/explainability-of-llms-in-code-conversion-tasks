Here is your converted JavaScript code:

```javascript
function bitwise(a, b) {
    console.log(`a and b: ${a & b}`);
    console.log(`a or b: ${a | b}`);
    console.log(`a xor b: ${a ^ b}`);
    console.log(`not a: ~${~a}`);
    console.log(`a << n: ${a << b}`); /* left shift */
    console.log(`a >> n: ${a >> b}`); /* on most platforms: arithmetic right shift */

    /* convert the signed integer into unsigned, so it will perform logical shift */
    let c = a >>> 0;
    console.log(`c >>> b: ${c >>> b}`); /* logical right shift */

    /* JavaScript does not support bitwise rotation */

    return;
}
```
In this code, we use template literals (backticks and `${}`) to format the string and insert values directly. In JavaScript, bitwise operators like `~`, `<<`, `>>` work in the same way as they do in C.

However, unlike C, JavaScript does not natively support left or right rotate operations. To implement this functionality in JavaScript, we would have to manually perform shift and bitwise AND operations to simulate rotation.

Additionally, note that JavaScript uses unsigned right shift (`>>>`) instead of signed right shift (`>>`). This is because all numbers are stored as 64-bit IEEE double precision floating point numbers in JavaScript, making the sign bit irrelevant for bitwise operations.
