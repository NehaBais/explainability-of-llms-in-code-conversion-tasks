Here is the JavaScript version of your Golang code:

```javascript
function bitwise(a, b) {
    let ua = a >>> 0; // unsigned right shift (equivalent to >> on positive numbers)
    let ub = b >>> 0;

    console.log(`a:   ${ua.toString(2).padStart(16, '0')}`);
    console.log(`b:   ${ub.toString(2).padStart(16, '0')}`);

    // Bitwise logical operations
    console.log(`and: ${ (a & b).toString(2).padStart(16, '0') }`);
    console.log(`or:  ${ (a | b).toString(2).padStart(16, '0') }`);
    console.log(`xor: ${ (a ^ b).toString(2).padStart(16, '0') }`);
    console.log(`not: ${ ((~ua) >>> 0).toString(2).padStart(16, '0') }`);

    // Logical shifts (unsigned left operand)
    console.log(`shl: ${(ua << ub).toString(2).padStart(16, '0')}`);
    console.log(`shr: ${(ua >> ub).toString(2).padStart(16, '0')}`);

    // Arithmetic shifts (signed left operand)
    console.log(`las: ${ (a << ub >>> 0).toString(2).padStart(16, '0') }`);
    console.log(`ras: ${ (a >> ub >>> 0).toString(2).padStart(16, '0') }`);

    // Rotations
    let rol = (ua << ub | ua >>> (16 - ub));
    let ror = ((ua >>> ub) | (ua << (16 - ub)));
    console.log(`rol: ${(rol >>> 0).toString(2).padStart(16, '0')}`);
    console.log(`ror: ${((ror & 0xFFFF) >>> 0).toString(2).padStart(16, '0')}`); 
}

let a = -460;
let b = 6;
bitwise(a, b);
```

This JavaScript version performs bitwise operations similarly to the Golang code. The padding and conversion to binary format are handled by `toString(2)` and `padStart(16, '0')`. Note that in JavaScript, all numbers are signed integers, so right shifts will perform an arithmetic shift (preserving the sign).
