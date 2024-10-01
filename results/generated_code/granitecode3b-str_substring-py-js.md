Sure, here's the JavaScript code that achieves the same output as the Python code:
```javascript
let s = "abcdefgh";
let n = 2;
let m = 3;
let char = "d";
let chars = "cd";
// starting from n=2 characters in and m=3 in length;
console.log(s.substring(n-1, n+m));
// starting from n characters in, up to the end of the string;
console.log(s.slice(n-1));
// whole string minus last character;
console.log(s.slice(0, -1));
// starting from a known character char="d" within the string and of m length;
let indx = s.indexOf(char);
console.log(s.substring(indx, indx+m));
// starting from a known substring chars="cd" within the string and of m length. 
indx = s.indexOf(chars);
console.log(s.substring(indx, indx+m));
```
Note that the JavaScript code uses `substring()` instead of `slice()` to extract substrings, as `slice()` is not supported in all browsers.

