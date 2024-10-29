The JavaScript code equivalent for the provided Golang program would look like this:

```javascript
let s = "ABCDEFGH";
let n = 2;
let m = 3;
// for reference
console.log("Index:  ", "01234567");
console.log("String:", s);
// starting from n characters in and of m length
console.log(`Start ${n}, length ${m}:    ${s.substring(n, n+m)}`);
// starting from n characters in, up to the end of the string
console.log(`Start ${n}, to end:      ${s.slice(n)}`);
// whole string minus last character
console.log("All but last:         ", s.substring(0, s.length - 1));
let dx = s.indexOf('D');
if (dx !== -1) {
    // starting from a known character within the string and of m length
    console.log(`Start 'D', length ${m}:  ${s.substring(dx, dx+m)}`);
} else {
    console.log("Character not found");
}
let sx = s.indexOf('DE');
if (sx !== -1) {
    // starting from a known substring within the string and of m length
    console.log(`Start "DE", length ${m}: ${s.substring(sx, sx+m)}`);
} else {
    console<｜begin▁of▁sentence｜>("Substring not found");<｜end▁of▁sentence｜>
}
```

Note that JavaScript strings are zero-indexed and the `slice()` method is used for substring operations in the same way as Golang. The functions `indexOf()` are used to find the index of a known character or string, similar to what's done with the `strings.IndexByte()` and `strings.Index()` methods in Golang.

