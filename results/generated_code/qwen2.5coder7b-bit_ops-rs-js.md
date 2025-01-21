Here is the equivalent JavaScript code for your Rust code:

```javascript
const a = 105;
const b = 91;

console.log(`a      = ${a.toString(2).padStart(8, '0')}`);
console.log(`b      = ${b.toString(2).padStart(8, '0')}`);
console.log(`a | b  = ${(a | b).toString(2).padStart(8, '0')}`);
console.log(`a & b  = ${(a & b).toString(2).padStart(8, '0')}`);
console.log(`a ^ b  = ${(a ^ b).toString(2).padStart(8, '0')}`);
console.log(`!a     = ${((~a) >>> 0).toString(2).padStart(8, '0')}`); // Use bitwise NOT and zero-fill to handle negative values

// For left shift
let shiftedLeftA = (a << b);
shiftedLeftA = shiftedLeftA.toString(2).padStart(8, '0');
console.log(`a << ${b} = ${shiftedLeftA}`);

// For right shift
let shiftedRightA = (a >> b);
shiftedRightA = shiftedRightA.toString(2).padStart(8, '0');
console.log(`a >> ${b} = ${shiftedRightA}`);

// For right arithmetic shift
let shiftedRightArithmeticA = (Math.trunc(a / Math.pow(2, b))).toString(2).padStart(8, '0');
console.log(`a >>> ${b} = ${shiftedRightArithmeticA}`); // Use arithmetic shift for JavaScript

```
In JavaScript, the bitwise NOT operation can result in negative numbers. To handle this, we use `>>>` operator which performs a zero-fill right-shift.

For left and right rotation, there's no direct bitwise operators like in Rust. We need to manually simulate the rotation logic using bitwise operations. However, the JavaScript Math.trunc function rounds toward zero for both positive and negative values and works well with bitwise shifts for right arithmetic shift as we are already handling negative numbers properly.
