Sure, here's the JavaScript equivalent of your code:
```
function bitwise(a, b) {
    console.log(`a and b: ${a & b}`);
    console.log(`a or b: ${a | b}`);
    console.log(`a xor b: ${a ^ b}`);
    console.log(`not a: ${~a}`);
    console.log(`a << n: ${a << b}`);  /* left shift */
    console.log(`a >> n: ${a >>> b}`);  /* on most platforms: arithmetic right shift  */
   /* convert the signed integer into unsigned, so it will perform logical shift  */
    let c = a;
    console.log(`c >> b: ${c >>> b}`);  /* logical right shift  */

    // left rotation
    let rotated = (a << b) | (a >>> (32 - b));
    console.log(`left rotate: ${rotated}`);

    // right rotation
    rotated = ((a << (32 - b)) & 0xffffffff) | (a >>> b);
    console.log(`right rotate: ${rotated}`);
}
```
Here `0xffffffff` is used to sign-extend the result of the shift operations when dealing with signed integers. The `>>>` operator behaves like a logical shift and will always return a positive number in JavaScript, which aligns with C's behavior.
