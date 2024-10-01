Here is the equivalent JavaScript code for your Golang program:

```javascript
let s = "ABCDEFGH";
let n = 2;
let m = 3;

// For reference
console.log("Index:  ", "01234567");
console.log("String: ", s);

// starting from n characters in and of m length
console.log(`Start ${n}, length ${m}:    ${s.substring(n, n + m)}`);

// starting from n characters in, up to the end of the string
console.log(`Start ${n}, to end:      ${s.substring(n)}`);

// whole string minus last character
console.log(`All but last:         ${s.slice(0, -1)}`);

// starting from a known character within the string and of m length
let dx = s.indexOf('D');
console.log(`Start 'D', length ${m}:  ${s.substring(dx, dx + m)}`);

// starting from a known substring within the string and of m length
let sx = s.indexOf("DE");
console.log(`Start "DE", length ${m}: ${s.substring(sx, sx + m)}`);
```

This JavaScript program has equivalent functionality to your Golang program. Notice that `substring()` and `slice()` methods are used in place of slicing (`[]`) operator for strings in JavaScript, which allows you to specify start and end indices. Also, it uses template literals (backticks) instead of string concatenation (`+`), providing more readability. The `indexOf()` method is used to find the index of a character or substring within the string.
