Sure, here is the equivalent JavaScript code for your C++ requirement:

```javascript
let a, b;
a = require('readline').createInterface({ input: process.stdin }).promisify("readline").question('Enter first integer: ');
b = require('readline').createInterface({ input: process.stdin }).promisify("readline").question('Enter second integer: ');
console.log(`a+b = ${parseInt(a)+parseInt(b)}`);
console.log(`a-b = ${parseInt(a)-parseInt(b)}`);
console.log(`a*b = ${parseInt(a)*parseInt(b)}`);
console.log(`a/b = ${(parseFloat(a)/parseFloat(b) | 0}, remainder ${parseInt((parseFloat(a)%parseFloat(b)))}`);
```
This JavaScript code uses Node's readline module to get integer inputs from the user and performs arithmetic operations. It also includes handling for division (converts both numbers to floating point before performing division to allow rounding as per requirement), remainder calculation and converting the results of these operations back into integers.
