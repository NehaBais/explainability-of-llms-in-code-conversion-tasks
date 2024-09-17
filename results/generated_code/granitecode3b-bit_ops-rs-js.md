Sure, here's the equivalent JavaScript code for the given Rust code snippet:
```javascript
let a = 105;
let b = 91;
console.log(`a      = ${a.toString(2).padStart(8, '0')}`);
console.log(`b      = ${b.toString(2).padStart(8, '0')}`);
console.log(`a | b  = ${(a | b).toString(2).padStart(8, '0')}`);
console.log(`a & b  = ${(a & b).toString(2).padStart(8, '0')}`);
console.log(`a ^ b  = ${(a ^ b).toString(2).padStart(8, '0')}`);
console.log(`!a     = ${(!a).toString(2).padStart(8, '0')}`);
console.log(`a << 3 = ${(a << 3).toString(2).padStart(8, '0')}`);
console.log(`a >> 3 = ${(a >> 3).toString(2).padStart(8, '0')}`);
```
This code performs the same operations as the Rust code, but in JavaScript. The `toString(2)` method is used to convert each integer into its binary representation, and the `.padStart()` method is used to pad the left side of the string with zeros if necessary to ensure that each value is represented by 8 bits.

