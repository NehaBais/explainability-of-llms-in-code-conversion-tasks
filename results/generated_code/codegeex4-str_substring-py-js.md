Here is your Python code converted to JavaScript:

```javascript
let s = 'abcdefgh';
let n = 2, m = 3, char = 'd', chars = 'cd';

// starting from n=2 characters in and m=3 in length;
console.log(s.substring(n-1,n+m-1));

// starting from n characters in, up to the end of the string;
console.log(s.substring(n-1));

// whole string minus last character;
console.log(s.slice(0,-1));

// starting from a known character char="d" within the string and of m length;
let indx = s.indexOf(char);
console.log(s.substring(indx,indx+m));

// starting from a known substring chars="cd" within the string and of m length. 
indx = s.indexOf(chars);
console.log(s.substring(indx,indx+m));
```

Note that JavaScript's `substring()` method works the same way as Python's slice() function, not necessarily the index positions.

Please also note that Python `index()` function throws a ValueError if the substring is not found. However, JavaScript's `indexOf()` method returns `-1` if the string cannot be found and does not throw an exception. This needs to be handled in your code accordingly.
