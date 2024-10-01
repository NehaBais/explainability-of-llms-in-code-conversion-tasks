Here's the converted code in JavaScript:
```javascript
let s = "0123456789";
let n = 3;
let m = 4;
let c = '2';
let sub = "456";
console.log(s.substring(n, n+m));
console.log(s.substring(n));
console.log(s.substring(0, s.length-1));
console.log(s.substring(s.indexOf(c), s.indexOf(c)+m));
console.log(s.substring(s.indexOf(sub), s.indexOf(sub)+m));
```
This code will display the following substrings:

6789
3456
0123
2456
4567

Note that in JavaScript, the `substring()` method is used instead of `substr()`. Also, the `indexOf()` method is used to find the index of a character or substring within a string. The `length` property is used to get the length of a string, and the `-1` parameter is used to indicate the end of the string in the `substring()` method.

