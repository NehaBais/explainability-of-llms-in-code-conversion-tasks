Sure, here's the JavaScript code that achieves the same result as the Rust code:
```javascript
let s = "abc文字化けdef";
let n = 2;
let m = 3;

    // Print 3 characters starting at index 2 (c文字)
console.log(s.slice(n, n+m));

    // Print all characters starting at index 2 (credients)
console.log(s.slice(n));

    // Print all characters except the last (abcletters)
console.log(s.split('').reverse().slice(1).join(''));

    // Print 3 characters starting with 'b' (bc文)
let cpos = s.indexOf('b');
console.log(s.slice(cpos, cpos+m));

    // Print 3 characters starting with "けd" (けde)
let spos = s.indexOf("けd");
console.log(s.slice(spos, spos+m));
```
Note that the `slice` and `split` methods in JavaScript are similar to the `skip`, `take`, and `rev` methods in Rust. Additionally, the `join` method is used to concatenate the characters of a string into a single string.

