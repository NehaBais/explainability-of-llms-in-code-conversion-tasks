This is quite a complex task to convert Python code to JavaScript without understanding each detail, especially when dealing with Unicode, which is beyond the scope of this question. However, I can provide you with a basic translation of your Python script into JavaScript:
```javascript
var s = 'abcdefgh';
var n = 2;
var m = 3;
var char = 'd';
var chars = 'cd';
// starting from n=2 characters in and m=3 in length;
console.log(s.slice(n-1, n+m-1));
// starting from n characters in, up to the end of the string;
console.log(s.slice(n-1));
// whole string minus last character;
console.log(s.slice(0, -1));
// starting from a known character char="d" within the string and of m length;
var indx = s.indexOf(char);
console.log(s.slice(indx, indx+m));
// starting from a known substring chars="cd" within the string and of m length. 
var indx2 = s.indexOf(chars);
console.log(s.slice(indx2, indx2+m));
```
This is a very basic translation of your code into JavaScript. There are many additional functions in JavaScript that can be used for string manipulations such as `slice()`, `substr()`, `substring()`, `split()`, etc., but they mostly do the same thing in different ways and with different syntaxes. The main difference between Python's slicing operations and JavaScript's is that you cannot slice a Unicode string by its characters. Python handles strings differently from other languages (it treats them as sequences of bytes), so it can easily work with Unicode code points, which are not handled well in JavaScript. Also, the `indexOf()` function does not return the index of the first occurrence of the specified substring when dealing with a Unicode string in JavaScript. To make this Python program translate to JavaScript more accurately, you will need to understand each language's syntax and functions to provide accurate code conversion.
