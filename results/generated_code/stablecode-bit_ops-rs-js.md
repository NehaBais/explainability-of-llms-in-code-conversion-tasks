Here is the equivalent JavaScript code for performing bitwise AND, OR, XOR operations on two integers and also operations like bitwise NOT (NOT operator in JS)), left shift, right shift, arithmetic shift, left rotate, and right rotate. All these operations are done on the first integer 'a' with a shift/rotate amount of the second integer 'b'.
```javascript
let a = 105; // decimal 105
let b = 91;  // decimal 91

console.log("a      = " + a.toString(2).padStart(8, "0"))); // binary representation of 105 in 8-bit padded format

console.log("b      = " + b.toString(2).padStart(8, "0"))); // binary representation of 91 in 8-bit padded format

console.log("a | b  = " + (a | b).toString(2).padStart(8, "0"))); // bitwise OR operation on 105 and 91; then convert to binary and pad with leading zeros if necessary

console.log("a & b  = " + (a & b).toString(2).padStart(8, "0"))); // bitwise AND operation on 105 and 91; then convert to binary and pad with leading zeros if necessary

console.log("a ^ b  = " + (a ^ b).toString(2).padStart(8, "0"))); // bitwise XOR operation on 105 and 91; then convert to binary and pad with leading zeros if necessary

console.log("!a     = " + (!a).toString(2).padStart(8, "0"))); // bitwise NOT operation on 105; then convert to binary and pad with leading zeros if necessary

console.log("a << 3 = " + (a << 3).toString(2).padStart(8, "0"))); // left shift operation of 105 by 3 positions; then convert to binary and pad with leading zeros if necessary

console.log("a >> 3 = " + (a >>> 3).toString(2).padStart(8, "0"))); // right shift operation of 105 by 3 positions; then convert to binary and pad with leading zeros if necessary

console.log("a >> 0 = " + (a >>> 0).toString(2).padStart(8, "0"))); // right shift operation of 105 by 0 positions; then convert to binary and pad with leading zeros if necessary
```
