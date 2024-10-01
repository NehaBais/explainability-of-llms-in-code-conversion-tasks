 Here is the JavaScript version of your C++ code:

```JavaScript
let s = '0123456789';

const n = 3;
const m = 4;
const c = '2';
const sub = '456';

console.log(s.slice(n, n + m)); // m length from n characters in
console.log(s.slice(n)); // up to the end of string starting from n characters in 
console.log(s.slice(0, s.length - 1)); // whole string minus the last character
console.log(s.slice(s.indexOf(c), s.indexOf(c) + m)); // m length substring starting from known character c
console.log(s.slice(s.search(sub), s.search(sub) + m)) // m length substring starting from known substring sub 
```
Please note: This JavaScript code does not account for the case where `m` is greater than the remaining string size after slicing from `n`. It simply uses the string slice method to extract that portion of the original string. If you need to handle such scenarios, additional error checking would be required in your program.
