 Here's the equivalent JavaScript code for the given Rust code, which handles substring operations as specified:

```javascript
let s = "abc文字化けdef";
let n = 2;
let m = 3;

// Print 3 characters starting at index 2 (c文字)
console.log(s.slice(n, n + m));

// Print all characters starting at index 2 (c文字化けdef)
console.log(s.slice(n));

// Print all characters except the last (abc文字化けde)
console.log(s.slice(0, -1));

// Print 3 characters starting with 'b' (bc文)
let cpos = s.indexOf('b');
if (cpos !== -1) {
    console.log(s.slice(cpos, cpos + m));
}

// Print 3 characters starting with "けd" (けde)
let spos = s.indexOf("けd");
if (spos !== -1) {
    console.log(s.slice(spos, spos + m));
}
```

This JavaScript code performs the same operations as the Rust code:
- It prints a substring starting from `n` characters in and of `m` length.
- It prints all characters starting from `n` characters in.
- It prints all characters except the last one.
- It prints 3 characters starting with a known character ('b').
- It prints 3 characters starting with a known substring ("けd").
