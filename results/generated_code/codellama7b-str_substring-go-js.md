
Here's the equivalent code in JavaScript:
```
const s = "ABCDEFGH";
const n = 2;
const m = 3;

// starting from n characters in and of m length
console.log(`Start ${n}, length ${m}:    ${s.substring(n, n + m)}`);

// starting from n characters in, up to the end of the string
console.log(`Start ${n}, to end:      ${s.substring(n)}`);

// whole string minus last character
console.log(`All but last:         ${s.slice(0, -1)}`);

// starting from a known character within the string and of m length
const dx = s.indexOf("D");
console.log(`Start 'D', length ${m}:  ${s.substring(dx, dx + m)}`);

// starting from a known substring within the string and of m length
const sx = s.indexOf("DE");
console.log(`Start "DE", length ${m}: ${s.substring(sx, sx + m)}`);
```
Note that in JavaScript, the `substring()` method takes two arguments: the starting index and the ending index (exclusive). The `slice()` method takes one argument: the start of the slice. In both cases, it returns a new string containing the specified part of the original string.
