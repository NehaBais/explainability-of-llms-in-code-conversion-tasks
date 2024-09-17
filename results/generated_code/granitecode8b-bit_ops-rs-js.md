Here is the converted code from Rust to JavaScript:
```javascript
const a = 105;
const b = 91;
console.log(`a      = ${a.toString(2).padStart(8, '0')}`);
console.log(`b      = ${b.toString(2).padStart(8, '0')}`);
console.log(`a | b  = ${(a | b).toString(2).padStart(8, '0')}`);
console.log(`a & b  = ${(a & b).toString(2).padStart(8, '0')}`);
console.log(`a ^ b  = ${(a ^ b).toString(2).padStart(8, '0')}`);
console.log(`!a     = ${/~a}.toString(2).padStart(8, '0')}`);
console.log(`a << 3 = ${(a << 3).toString(2).padStart(8, '0')}`);
console.log(`a >> 3 = ${(a >> 3).toString(2).padStart(8, '0')}`);
```
This code performs a bitwise AND, OR, and XOR on two integers `a` and `b`, a bitwise NOT on the first integer `a`, and left shift and right shift on the first integer `a`. The shifts are done by multiplying `a` by 2 to the power of the second integer `b`.

