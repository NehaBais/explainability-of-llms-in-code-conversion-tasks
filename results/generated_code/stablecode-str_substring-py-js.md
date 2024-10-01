Here is the equivalent JavaScript code for your Python requirements:

```JavaScript
let s = 'abcdefgh';
let n, m, char, chars;
n = 2;
m = 3;
char = 'd';
chars = 'cd';
// starting from n=2 characters in and m=3 in length;
console.log(s.substring(n-1, n+m-1)));
// starting from n characters in, up to the end of the string;
console.log(s.substring(n-1)));
// whole string minus last character;
console.log(s.substring(0, s.length - 1))));
// starting from a known character char="d" within the string and of m length;
let indx = s.indexOf(char);
console.log(s.substring(indx, indx+m)));
// starting from a known substring chars="cd" within the string and of m length. 
indx = s.indexOf(chars);
console.log(s.substring(indx, indx+m))));
```
This JavaScript code takes into account all your requirements: it prints a substring based on starting position (n), length (m) or a known character/substring within the string of any length. The code uses string indexing and substring methods provided by JavaScript's built-in String object.
