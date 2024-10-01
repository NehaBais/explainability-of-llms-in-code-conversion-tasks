 In JavaScript, the process is a bit different as it does not have `skip` and `take` methods as in Rust. It also lacks built-in UTF-16 support, but it can be achieved by using the Buffer object provided by NodeJS which supports all valid Unicode code points.
Here's how you could write this program:

```javascript
let s = "abc文字化けdef";
let n = 2;
let m = 3;

// Print 3 characters starting at index 2 (c文字)
console.log(Buffer.from(s.slice(n, n + m), 'utf8').toString());

// Print all characters starting at index 2 (c文字化けdef)
console.log(Buffer.from(s.slice(n), 'utf8').toString());

// Print all characters except the last (abc文字化けde)
console.log(Buffer.from(s.slice(0, s.length - 1), 'utf8').toString().split('').reverse().join(''));

// Print 3 characters starting with 'b' (bc文)
let cpos = s.indexOf('b');
if (cpos !== -1) {
    console.log(Buffer.from(s.slice(cpos, cpos + m), 'utf8').toString());
}

// Print 3 characters starting with "けd" (けde)
let spos = s.indexOf("けd");
if (spos !== -1) {
    console.log(Buffer.from(s.slice(spos, spos + m), 'utf8').toString());
}
```
Please note that JavaScript does not have UTF-32 support by default. To use it, you need to use the Buffer object provided by NodeJS and specify `'ucs2'` as encoding.
