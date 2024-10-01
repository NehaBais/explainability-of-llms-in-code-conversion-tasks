Here is the equivalent JavaScript code:

```javascript
let s = "0123456789";

let n = 3;
let m = 4;
let c = '2';
let sub = "456";

console.log(s.substr(n, m));
console.log(s.substr(n));
console.log(s.substr(0, s.length-1));
console.log(s.substring(s.indexOf(c), s.indexOf(c) + m));
console.log(s.substring(s.indexOf(sub), s.indexOf(sub) + m));
```

Please note that in JavaScript `indexOf()` method returns the position of the first occurrence of a specified value. If it is not found, it returns -1. The `substring(startIndex[, endIndex])` function extracts characters from a string between two specified indices (positions). 

Also `substr(index, length)` is another way to extract part of a string in JavaScript and it starts at the specified index and ends at the `length` count after the start index.
