 Here's the equivalent JavaScript code for the given C++ code, which handles the specified substring operations on a Unicode string:

```javascript
let s = "0123456789";

let n = 3;
let m = 4;
let c = '2';
let sub = "456";

console.log(s.substring(n, n + m)); // Display a substring starting from n characters in and of m length
console.log(s.substring(n));         // Display a substring starting from n characters in, up to the end of the string
console.log(s.substring(0, s.length - 1)); // Display the whole string minus the last character
console.log(s.substring(s.indexOf(c), m)); // Display a substring starting from '2' and of length m
console.log(s.substring(s.indexOf(sub), m)); // Display a substring starting from "456" and of length m
```

This JavaScript code performs the same operations as the C++ code:
1. Displays a substring starting from `n` characters in and of `m` length.
2. Displays a substring starting from `n` characters in, up to the end of the string.
3. Displays the whole string minus the last character.
4. Displays a substring starting from the known character '2' and of length `m`.
5. Displays a substring starting from the known substring "456" and of length `m`.
