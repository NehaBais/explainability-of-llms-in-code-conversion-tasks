Here's the equivalent JavaScript code that meets the requirements:
```javascript
let s = 'abcdefgh';
let n = 2;
let m = 3;
let char = 'd';
let chars = 'cd';
// starting from n=2 characters in and m=3 in length;
console.log(s.substring(n-1, n+m-1));
// starting from n characters in, up to the end of the string;
console.log(s.slice(n-1));
// whole string minus last character;
console.log(s.slice(0, -1));
// starting from a known character char="d" within the string and of m length;
let indx = s.indexOf(char);
console.log(s.substring(indx, indx+m));
// starting from a known substring chars="cd" within the string and of m length. 
indx = s.indexOf(chars);
console.log(s.substring(indx, indx+m));
```
Note that in JavaScript, array indices start at 0, so the index of the first character in the string is 0. The `slice` method takes two arguments: the starting index and the ending index (optional). If the ending index is not specified, it defaults to the end of the array. The `substring` method also takes two arguments: the starting index and the ending index (optional), but unlike `slice`, it does not include the ending index in the resulting substring.

