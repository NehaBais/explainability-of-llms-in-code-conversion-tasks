The JavaScript version of the given Rust code is as follows -

```javascript
let s = "abc文字化けdef";
let n = 2;
let m = 3;

// Print 3 characters starting at index 2  (c文字)
console.log(s.slice(n, n + m));

// Print all characters starting at index 2  (c文字化けdef)
console.log(s.slice(n));

// Print all characters except the last  (abc文字化けde)
console.log(s.slice(0, s.length - 1));

// Print 3 characters starting with 'b'  (bc文)
let cpos = s.indexOf('b');
console.log(s.slice(cpos, cpos + m));

// Print 3 characters starting with "けd"  (けde)
let spos = s.indexOf("けd");
console<｜begin▁of▁sentence｜>.slice(spos, spos + m));
```
Note: The JavaScript versions of the slice() method and String's indexOf property are equivalent to Rust’s char’s nth() function and String’s find() method respectively. These methods return a substring or index based on provided start-end indexes. 

Also, note that JavaScript's `console.log()` is used for outputting the results of each operation - it behaves similarly to Rust’s println! macro.

