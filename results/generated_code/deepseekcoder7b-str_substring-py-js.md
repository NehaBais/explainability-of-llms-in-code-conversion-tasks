The JavaScript code is as follows:

```javascript
let s = 'abcdefgh';
let n = 2, m = 3, char = 'd', chars = 'cd';
// starting from n=2 characters in and m=3 length;
console.log(s.substring(n-1, n+m-1));  //Note that string indices start at 0 in JavaScript, not 1 like Python
// starting from n characters in, up to the end of the string;
console.log(s.slice(n-1));  
// whole string minus last character;
console.log(s.slice(0, -1)); //The slice method does not include the ending index so we use negative 1 for the length argument
// starting from a known character char="d" within the string and of m length;
let indx = s.indexOf(char);  
console.log(s.substring(indx, indx+m));
// starting from a known substring chars="cd" within the string and of m length;
indx = s.indexOf(chars); 
console.log(s.substring(indx, indx + m));
```

In JavaScript, `slice()` method extracts parts of a string and returns the extracted section in a new string object without changing the original string. The indexOf method is used to find the position of a specified character or substring within a string object. 

Also note that indices start at 0 in Javascript, not 1 as they do in Python. As such we need to use n-1 and indx+m-1 (not m) when calling slice and substring methods respectively.

