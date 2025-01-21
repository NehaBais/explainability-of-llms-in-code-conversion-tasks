The JavaScript code to achieve the same functionality as the C++ code is below:

```javascript
let s = "0123456789";

const n = 3;
const m = 4;
const c = '2';
const sub = "456";

console.log(s.slice(n, n + m));
console.log(s.slice(n));
console.log(s.slice(0, -1));
console.log(s.slice(s.indexOf(c), s.indexOf(c) + m));
console.log(s.slice(s.indexOf(sub)));
```

JavaScript's `slice` method is equivalent to C++'s `substr`. It extracts parts of a string and returns the extracted parts in a new string. The second parameter can be omitted, which will extract from the start index till the end of the string. If it's negative, it counts from the end of the string.

In JavaScript, strings are treated as sequences of UTF-16 code units, so each character in the string is one or two 16-bit units. However, as JavaScript natively supports Unicode, it can handle any valid Unicode code point without converting to UTF-8 or UTF-16. When dealing with a string in JavaScript, you need not worry about whether the characters are part of the Basic Multilingual Plane or above.
