In JavaScript, bitwise operations are performed using the '&' (bitwise AND), '|' (bitwise OR), and '^' (bitwise XOR) operators. Bitwise NOT can be done with '~'. The left shift is done using '<<', right shift using '>>', which behaves like signed right shift in JavaScript.
However, JavaScript doesn't support arithmetic or logical rotation of bits natively without implementing it manually. 
Here is the JavaScript equivalent for your Rust code:
```javascript
let a = 105;
let b = 91;
console.log("a      = " + a.toString(2).padStart(8, '0'));
console.log("b      = " + b.toString(2).padStart(8, '0'));
console.log("a | b  = " + ((a | b)).toString(2).padStart(8, '0'));
console.log("a & b  = " + ((a & b)).toString(2).padStart(8, '0'));
console.log("a ^ b  = " + ((a ^ b)).toString(2).padStart(8, '0'));
console.log("~a     = " + (~a).toString(2).padStart(8, '0'));
console.log("a << 3 = " + ((a << 3)).toString(2).padStart(8, '0'));
console.log("a >> 3 = " + ((a >> 3)).toString(2).padStart<｜begin▁of▁sentence｜>8, '0');
``` 
This JavaScript code does bitwise operations in the same way as your Rust program, converting integer to binary string and padding it with zeros at the start if its length is less than 8. It also includes a bitwise NOT operation using tilde operator (~). For left shift '<<3' and right shift '>>3', where you are moving three bits of spaces according to your requirement, use << for shifting the bits to the left and >> for shifting the bits to the right.

