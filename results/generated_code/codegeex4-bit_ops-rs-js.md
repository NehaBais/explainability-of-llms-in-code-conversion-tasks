Here is the equivalent JavaScript code:

```javascript
let a = 105;
let b = 91;

console.log(`a      = ${a.toString(2).padStart(8, '0')}`);
console.log(`b      = ${b.toString(2).padStart(8, '0')}`);

console.log(`a | b  = ${(a | b).toString(2).padStart(8, '0')}`);
console.log(`a & b  = ${(a & b).toString(2).padStart(8, '0')}`);
console.log(`a ^ b  = ${(a ^ b).toString(2).padStart(8, '0')}`);

console.log(`!a     = ${(~a >>> 0).toString(2).padStart(8, '0')}`); // Bitwise NOT in JavaScript is for signed integers. We use unsigned right shift >>> to mimic it

console.log(`a << b = ${(a << b).toString(2).padStart(8, '0')}`);
console.log(`a >> b = ${(a >> b).toString(2).padStart(8, '0')}`);

// In JavaScript bitwise operations are performed on signed integers. 
// So for the rotate operation we have to implement it manually

function rotateLeft(a, b) {
    return (a << b) | (a >>> (8 - b));
}

function rotateRight(a, b) {
    return (a >> b) | (a << (8 - b));
}

console.log(`a <<< b = ${rotateLeft(a, b).toString(2).padStart(8, '0')}`);
console.log(`a >>>> b = ${rotateRight(a, b).toString(2).padStart(8, '0')}`);
```

Note: In JavaScript, bitwise operations are done on signed 32-bit integers. For the rotate operation we have to implement it manually because JavaScript does not support it natively unlike Rust which has built-in functions for these operations. We use unsigned right shift (`>>>`) instead of the regular right shift (`>>`) to get the correct result for a NOT operation on negative numbers.
