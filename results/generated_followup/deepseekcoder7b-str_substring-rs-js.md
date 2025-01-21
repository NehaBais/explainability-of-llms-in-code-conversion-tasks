The error message indicates that there is an unexpected token `s` after console, which is not expected in JavaScript as it's used as a method for logging to console. 

To fix this, we need to use the correct syntax for string slicing or substring extraction in JavaScript using `slice()` function. The corrected code block would be:

```js
let s  = "abc文字化けdef";
let n  = 2;
let m = 3;

// Print 3 characters starting at index 2 (c文字)
console.log(s.slice(n, n + m));

// Print all characters starting at index 2 (c文字化けdef)
console.log(s.slice(n));

// Print all characters except the last (abc文字化けde)
console.log(s.slice(0, s.length - 1));

// Print 3 characters starting with 'b' (bc文)
let cpos = s.indexOf('b');
console.log(s.slice(cpos, cpos + m));

// Print 3 characters starting with "けd" (けde)
let spos = s.indexOf("けd");
console.log(s.slice(spos, spos + m));
```

