Sure, here is the JavaScript equivalent of your Rust code:

```javascript
function bitwiseOperations(a, b) {
    // Bitwise OR
    console.log("a | b  = " + (a | b).toString(2).padStart(8, '0'));

    // Bitwise AND
    console.log("a & b  = " + (a & b).toString(2).padStart(8, '0'));

    // Bitwise XOR
    console.log("a ^ b  = " + (a ^ b).toString(2).padStart(8, '0'));

    // Bitwise NOT
    console.log("!a     = " + (~a).toString(2).padStart(8, '0'));

    // Left shift
    console.log("a << 3 = " + (a << 3).toString(2).padStart(8, '0'));

    // Right shift
    console.log("a >> 3 = " + (Math.trunc(a / Math.pow(2, 3))).toString(2).padStart(8, '0'));

    // Left rotate
    console.log("a << -3 = " + (rotateLeft(a, b)).toString(2).padStart(8, '0'));

    // Right rotate
    console.log("a >> -3 = " + (rotateRight(a, b)).toString(2).padStart(8, '0'));
}

function rotateLeft(value, shift) {
    return ((value << shift) | (value >>> (32 - shift)));
}

function rotateRight(value, shift) {
    return ((value >>> shift) | (value << (32 - shift)));
}

let a = 105;
let b = 91;

bitwiseOperations(a, b);
```

In this JavaScript code:

- The function `bitwiseOperations` takes two arguments: `a` and `b`.
- It performs the bitwise OR, AND, XOR, NOT, left shift, right shift, left rotate (and right rotate) operations.
- Each operation is performed on the value of `a` after being shifted or rotated by the value of `b`.
- The results are converted to binary format using `toString(2)` and padded with zeros on the left if necessary.

The `rotateLeft` and `rotateRight` functions perform the left and right rotation operations, respectively. They use bitwise operations to achieve this. Note that JavaScript's bitwise shift operators (`<<` and `>>`) do not have a direct equivalent for left or right rotation like Rust. We use bitwise operations to simulate these shifts.
