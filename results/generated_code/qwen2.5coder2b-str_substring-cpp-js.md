Here is the JavaScript equivalent of your C++ code:

```javascript
function substr(string, start, length) {
    return string.substring(start, start + length);
}

let s = "0123456789";

let n = 3;
let m = 4;
let c = '2';
let sub = "456";

console.log(substr(s, n, m));
console.log(substr(s, n));
console.log(substr(s, 0, s.length - 1));
console.log(substr(s, s.indexOf(c), m));
console.log(substr(s, s.indexOf(sub), m));
```

In this JavaScript code, we have defined a function `substr` which takes four parameters - the string to be processed, the starting index of the substring and the length of the substring. We then call this function with the appropriate arguments in each case from your C++ code.

Please note that JavaScript does not use character as a data type; it uses Unicode code point as its unit. However, for the purpose of testing, we can use characters '0' to '9', 'A' to 'Z', etc.
