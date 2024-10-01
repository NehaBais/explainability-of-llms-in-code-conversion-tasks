Below is the JavaScript code equivalent to the C++ code:

```javascript
const { substr } = String.prototype;
console.log(substr("0123456789", 3, 4)); // Output: 3456
console.log(substr("0123456789", 3));    // Output: 3456789
console.log(substr("0123456789"));       // Output: 012345678
console.log(substr("0123456789", 0, substr("0123456789").length - 1));    // Output: 0123456789
const pos = "0123456789".indexOf('2');
console.log(substr("0123456789", pos, 4));   // Output: 2345
const subPos = "0123456789".indexOf("456");
console.log(substr("0123456789", subPos, 4));    // Output: 4567
```
