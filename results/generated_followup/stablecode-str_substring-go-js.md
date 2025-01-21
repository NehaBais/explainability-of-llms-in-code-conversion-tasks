The error is caused by an unexpected closing parenthesis `)`. The syntax error occurs at the line where we are trying to assign a value to the variable `dx`.

To fix this issue, remove the extra closing parenthesis from the line where we are assigning a value to the variable `dx`. 

Here's the corrected code:

```js
const string = 'ABCDEFGH';
const n = 2;
const m = 3;

// For reference
console.log('Index: ', '01234567');
console.log('String:', string);

// Starting from n characters in and of m length
let substring = string.substring(n, n + m));
console.log(`Start ${n}, length ${m}}:\n` , substring);

// Starting from n characters in, up to the end of the string
substring = string.substring(n);
console.log(`Start ${n}, to end:\n` , substring);

// Whole string minus last character
substring = string.slice(0, -1));
console.log(`All but last:\n` , substring);

// Starting from a known character within the string and of m length
const dx = string.indexOf('D');
console.log(`Start 'D', length ${m}}:\n` , string.substring(dx, dx + m)));

// Starting from a known substring within the string and of m length
const sx = string.indexOf("DE");
console.log(`Start "DE", length ${m}}:\n` , string.substring(sx, sx + m))));
```