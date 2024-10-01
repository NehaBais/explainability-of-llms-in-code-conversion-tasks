## Javascript
```js
const str = 'abcdefgh'
const n,m,char,chars = 2,3,'d','cd';
// starting from n=2 characters in and m=3 in length;
console.log(str.slice(n-1, n+m-1));
// starting from n characters in, up to the end of the string;
console.log(str.slice(n-1));
// whole string minus last character;
console.log(str.slice(0,-1));
// starting from a known character char="d" within the string and of m length;
const indx = str.indexOf('d');
console.log(str.substr(indx, m))
// starting from a known substring chars="cd" within the string and of m length. 
const indx = str.indexOf('cd');
console.log(str.slice(indx, indx+m));
```
