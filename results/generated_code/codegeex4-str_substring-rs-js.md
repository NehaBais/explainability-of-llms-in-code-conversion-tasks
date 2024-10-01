```javascript
let s = "abc文字化けdef";
let n = 2;
let m = 3;

// Print 3 characters starting at index 2 (c文字)
console.log([...s].slice(n, n + m).join(''));

// Print all characters starting at index 2 (c文字化けdef)
console.log([...s].slice(n).join(''));

// Print all characters except the last (abc文字化けde)
console.log([...s].reverse().slice(1).reverse().join(''));

// Print 3 characters starting with 'b' (bc文)
let cpos = s.indexOf('b');
console.log([...s.slice(cpos)].slice(0, m).join(''));

// Print 3 characters starting with "けd" (けde)
let spos = s.indexOf("けd");
console.log([...s.slice(spos)].slice(0, m).join(''));
```
This JavaScript code follows the same logic and structure as your Rust program, but uses JavaScript's methods for string manipulation. It utilizes array destructuring to handle Unicode characters properly, even those outside of the Basic Multilingual Plane (BMP), by using JavaScript’s built-in support for Unicode strings.
