Here is the JavaScript version of your code:

```javascript
function bitwise(A, b) {
    console.log("a and b: " + (A & b));
    console.log("A or b: " + (A | b));
    console.log("A xor b: " + (A ^ b));
    console.log("not A: " + ~A);
    console.log("A << n: " + (A << b)); // left shift
    console.log("A >> n: " + (A >>> b)); // On most platforms: arithmetic right shift
    // convert the signed integer into unsigned, so it will perform logical shift
    var c = A;
    console.log("c >> b: " + (c >>> b)); // logical right shift
    // there are no rotation operators in JS, but we can simulate them with shifts
    for (let i = 0; i < b; i++) {
        A = (A << 1) | (A >> (32 - 1)); // simulate left rotate of A by 1 and right shift of all bits of A by 31
        console.log("A rotated left: " + A);
    }

    for (let i = 0; i < b; i++) {
        A = (A >> 1) | ((A & 1) << (32 - 1)); // simulate right rotate of A by 1 and left shift of all bits of A by 31
        console.log("A rotated right: " + A);
    }

    return A;
}
```
Note that this JavaScript code assumes a 32-bit integer for simplicity, which is common in most modern systems (64-bit with sign bit). You would need to adjust the shift amounts if you're using a different type of system.
