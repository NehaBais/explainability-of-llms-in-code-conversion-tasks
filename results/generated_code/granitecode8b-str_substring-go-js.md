Here's the converted code from Golang to JavaScript:
```javascript
const s = 'ABCDEFGH';
const n = 2;
const m = 3;
// for reference
console.log('Index: ', '01234567');
console.log('String:', s);
// starting from n characters in and of m length
console.log(`Start ${n}, length ${m}:    ${s.substring(n, n+m)}`);
// starting from n characters in, up to the end of the string
console.log(`Start ${n}, to end:      ${s.slice(n)}`);
// whole string minus last character
console.log(`All but last:         ${s.substring(0, s.length - 1)}`);
// starting from a known character within the string and of m length
const dx = s.indexOf('D');
console.log(`Start 'D', length ${m}:  ${s.substring(dx, dx+m)}`);
// starting from a known substring within the string and of m length
const sx = s.indexOf('DE');
console.log(`Start "DE", length ${m}: ${s.substring(sx, sx+m)}`);
```
This code will display the same output as the original Golang code for the given input values of `n` and `m`. The `substring()` method is used to extract a substring from a string based on the start index and length, while the `slice()` method is used to extract a portion of a string starting from a given index. The `indexOf()` method is used to find the index of a specific character or substring within a string.

