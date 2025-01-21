 Sure! Below is the equivalent JavaScript code for the provided Go code:

```javascript
function bitwise(a, b) {
    console.log("a:   " + a.toString(2).padStart(16, '0'));
    console.log("b:   " + b.toString(2).padStart(16, '0'));

    // Bitwise logical operations
    const and = a & b;
    const or = a | b;
    const xor = a ^ b;
    const not = ~a;

    console.log("and: " + and.toString(2).padStart(16, '0'));
    console.log("or:  " + or.toString(2).padStart(16, '0'));
    console.log("xor: " + xor.toString(2).padStart(16, '0'));
    console.log("not: " + not.toString(2).padStart(16, '0'));

    if (b < 0) {
        console.log("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
        return;
    }

    // Logical shifts (unsigned left operand)
    const shl = a << b;
    const shr = a >> b;

    // Arithmetic shifts (signed left operand)
    const las = a << b;
    const ras = a >> b;

    // Rotations
    const rol = ((a << b) | (a >>> (16 - b))) & 0xFFFF;
    const ror = ((a >>> b) | (a << (16 - b))) & 0xFFFF;

    console.log("shl: " + shl.toString(2).padStart(16, '0'));
    console.log("shr: " + shr.toString(2).padStart(16, '0'));
    console.log("las: " + las.toString(2).padStart(16, '0'));
    console.log("ras: " + ras.toString(2).padStart(16, '0'));
    console.log("rol: " + rol.toString(2).padStart(16, '0'));
    console.log("ror: " + ror.toString(2).padStart(16, '0'));
}

function main() {
    const a = -460;
    const b = 6;
    bitwise(a, b);
}

main();
```

This JavaScript code performs the same operations as your Go code. It uses JavaScript's built-in methods for bitwise operations and ensures that all shift/rotate distances are treated as unsigned integers to avoid negative values causing unexpected behavior.
