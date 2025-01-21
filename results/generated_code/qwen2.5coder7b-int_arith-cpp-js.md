Here is the equivalent JavaScript code for your C++ program:

```javascript
let readlineSync = require('readline-sync');

let a = parseInt(readlineSync.question('Enter first number: '));
let b = parseInt(readlineSync.question('Enter second number: '));

console.log(`a + b = ${a+b}`);
console.log(`a - b = ${a-b}`);
console.log(`a * b = ${a*b}`);

// For exponentiation
console.log(`a ^ b = ${Math.pow(a, b)}`);

if (b > 0) {
    console.log(`a / b = ${Math.floor(a/b)}, remainder ${a%b}`);
} else if (b < 0 && a < 0) {
    console.log(`a / b = ${Math.floor(a/b)}, remainder ${a%b}`);
} else {
    console.log(`a / b = ${Math.trunc(a/b)}, remainder ${a%b}`);
}
```
In this code, I've used the readline-sync library to get user inputs. The Math.pow() function is used for exponentiation and Math.floor(), Math.trunc() functions are used for rounding towards zero respectively.

Please install `readline-sync` npm package before running this script by using the following command:

npm install readline-sync

Also, JavaScript doesn't support integer division or remainder operator with negative numbers like C++. When dividing a negative number by another negative number in JS, the result is always positive. Also, when calculating the remainder of two numbers with different signs in JS, the sign of the remainder is always the same as the divisor.
