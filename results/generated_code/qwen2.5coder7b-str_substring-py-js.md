Here is the JavaScript equivalent code for your Python program:

```JavaScript
let s = 'abcdefgh';
let n, m, char, chars;
n = 2, m = 3, char = 'd', chars = 'cd';

// starting from n=2 characters in and m=3 in length
console.log(s.slice(n-1,n+m));

// starting from n characters in, up to the end of the string
console.log(s.slice(n-1));

// whole string minus last character
console.log(s.slice(0,-1));

// starting from a known character char="d" within the string and of m length
let indx = s.indexOf(char);
console.log(s.slice(indx,indx+m));

// starting from a known substring chars="cd" within the string and of m length
indx = s.indexOf(chars);
console.log(s.slice(indx,indx+m));
```

This JavaScript program uses the String methods `slice()` and `indexOf()` to accomplish the tasks as in your Python program. The `slice()` method extracts parts of a string and returns the extracted parts in a new string. If no end index is specified, it will extract from that start position to the end of the string.

The `indexOf()` method searches for a specific value within a string and returns its first occurrence as an integer. If not found, it returns -1.
