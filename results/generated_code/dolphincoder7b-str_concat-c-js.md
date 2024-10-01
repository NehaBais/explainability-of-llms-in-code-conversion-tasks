```javascript
const s = "hello";
let s2;
console.log(`${s} literal`);
// or
console.log(`${s}${" literal"}`);
s2 = `${s} literal`;
console.log(s2);
```
The given code is written in C, but JavaScript does not have direct support for concatenating strings using "+" like the concatenation operator used in C. In JavaScript, string concatenation is typically achieved by using template literals or string interpolation. Here's how the code can be rewritten to use these features:

const s = "hello";
let s2;
console.log(`${s} literal`);
// or 
console.log(`${s}${" literal"}`);
s2 = `${s} literal`;
console.log(s2);
