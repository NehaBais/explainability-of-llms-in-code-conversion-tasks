 Sure, here is the equivalent JavaScript code to perform the bitwise operations as specified in your Rust code:

```javascript
function main() {
    let a = 105; // u8
    let b = 91;  // u8
    console.log("a      = " + a.toString(2).padStart(8, '0'));
    console.log("b      = " + b.toString(2).padStart(8, '0'));
    console.log("a | b  = " + (a | b).toString(2).padStart(8, '0'));
    console.log("a & b  = " + (a & b).toString(2).padStart(8, '0'));
    console.log("a ^ b  = " + (a ^ b).toString(2).padStart(8, '0'));
    console.log("!a     = " + (~a).toString(2).padStart(8, '0'));
    console.log("a << 3 = " + (a << 3).toString(2).padStart(8, '0'));
    console.log("a >> 3 = " + (a >> 3).toString(2).padStart(8, '0'));
}

main();
```

This JavaScript code performs the following operations:
1. Bitwise OR (`|`) on `a` and `b`.
2. Bitwise AND (`&`) on `a` and `b`.
3. Bitwise XOR (`^`) on `a` and `b`.
4. Bitwise NOT (`!`) on `a`.
5. Left shift (`<<`) of `a` by 3 bits.
6. Right shift (`>>`) of `a` by 3 bits.

The results are printed in binary format using the `toString(2).padStart(8, '0')` method to ensure that each number is displayed as an 8-bit binary string.
