Here's the equivalent JavaScript code:

```javascript
var prompt = require('prompt-sync')();

var a = prompt('Enter first integer: ');
var b = prompt('Enter second integer: ');

// Convert to number, assume input are valid integers.
a = Number(a);
b = Number(b);

// test for less-than
if (a < b)
  console.log(`${a} is less than ${b}`);

// test for equality
if (a === b)
  console.log(`${a} is equal to ${b}`);

// test for greater-than
if (a > b)
  console.log(`${a} is greater than ${b}`);
```
