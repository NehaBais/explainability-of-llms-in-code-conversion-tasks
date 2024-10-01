Sure! Here's the JavaScript code that achieves the same output as the C++ code:
```javascript
const s = "0123456789";
const n = 3;
const m = 4;
const c = '2';
const sub = "456";

console.log(s.substr(n, m));
console.log(s.substr(n));
console.log(s.substr(0, s.length-1));
console.log(s.substr(s.indexOf(c), m));
console.log(s.substr(s.indexOf(sub), m));
```
This code uses the `substr()` method to extract substrings from the `s` string based on the specified start and end indices, as well as the `indexOf()` method to find a substring within the `s` string. The output is displayed in the console using `console.log()`.

