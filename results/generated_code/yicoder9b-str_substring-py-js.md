Here is your requested JavaScript code. It uses substrings instead of slices due to JavaScript's handling of strings:

```javascript
let s = 'abcdefgh';
let n, m, char, chars;
[n, m, char, chars] = [2, 3, 'd', 'cd'];
// starting from n=2 characters in and m=3 in length;
console.log(s.substring(n-1, n+m-1));
// starting from n characters in, up to the end of the string;
console.log(s.substring(n-1));
// whole string minus last character;
console.log(s.slice(0, -1));
// starting from a known character char="d" within the string and of m length;
let indx = s.indexOf(char);
console.log(s.substring(indx, indx+m));
// starting from a known substring chars="cd" within the string and of m length. 
indx = s.indexOf(chars);
console.log(s.substring(indx, indx+m));
```
