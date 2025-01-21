The error is caused by incorrect syntax usage of `padStart` function inside string concatenation. The correct way to use it would be - `(a >> 3).toString(2).padStart(8, '0')`. 

Here is the corrected JavaScript code that does bitwise operations as per your requirement:
```js
let a = 105;
let b = 91;
console.log("a      = " + a.toString(2).padStart(8, '0'));
console.log("b      = " + b.toString(2).padStart(8, '0'));
console.log("a | b  = " + ((a | b)).toString(2).padStart(8, '0'));
console.log("a & b  = " + ((a & b)).toString(2).padStart(8, '0'));
console.log("a ^ b  = " + ((a ^ b)).toString(2).padStart(8, '0'));
console.log("~a     = " + (~a).toString(2).padStart(8, '0').slice(24)); // Bitwise NOT gives a negative value so we slice the first 3 bytes to get last 5 bits only
console.log("a << 3 = " + ((a << 3)).toString(2).padStart(8, '0'));
console.log("a >> 3 = " + ((a >> 3)).toString(2).padStart(8, '0'));
```
This JavaScript code does bitwise operations in the same way as your Rust program, converting integer to binary string and padding it with zeros at the start if its length is less than 8. It also includes a bitwise NOT operation using tilde operator (~). For left shift '<<3' and right shift '>>3', where you are moving three bits of spaces according to your requirement, use << for shifting the bits to the left and >> for shifting the bits to the right.

