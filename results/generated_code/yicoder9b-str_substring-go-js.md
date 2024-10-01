Here is the equivalent JavaScript code for the Golang program you have provided that displays substrings based on different conditions:

```javascript
let s = "ABCDEFGH";
let n = 2, m = 3;
// for reference
console.log("Index: " + "01234567");
console.log("String:" + s);
// starting from n characters in and of m length
console.log(`Start ${n}, length ${m}:    ` + s.substring(n, n+m));
// starting from n characters in, up to the end of the string
console.log(`Start ${n}, to end:      ` + s.slice(n));
// whole string minus last character
console.log(`All but last:         ` + s.slice(0, -1));
// starting from a known character within the string and of m length
let dx = s.indexOf('D');
console.log(`Start 'D', length ${m}:  ` + s.substring(dx, dx+m));
// starting from a known substring within the string and of m length
let sx = s.indexOf("DE");
console.log(`Start "DE", length ${m}: ` + s.substring(sx, sx+m));
``` 
Please note that JavaScript's indexing starts from zero just like Golang. Also the substring() method in JavaScript includes the start index and excludes the end index, which is different from slicing in Python or Golang where both are included. The indexOf() function in JS provides the first occurrence of a specified value within a string, it returns -1 if not found.
