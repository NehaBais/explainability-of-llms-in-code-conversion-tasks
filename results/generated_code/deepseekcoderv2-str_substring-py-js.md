 Sure, here is the equivalent JavaScript code for the given Python code:

```javascript
let s = 'abcdefgh';
let n = 2, m = 3, char = 'd', chars = 'cd';

// starting from n=2 characters in and m=3 in length;
console.log(s.slice(n - 1, n + m - 1));

// starting from n characters in, up to the end of the string;
console.log(s.slice(n - 1));

// whole string minus last character;
console.log(s.slice(0, -1));

// starting from a known character char="d" within the string and of m length;
let indx = s.indexOf(char);
console.log(s.slice(indx, indx + m));

// starting from a known substring chars="cd" within the string and of m length. 
indx = s.indexOf(chars);
console.log(s.slice(indx, indx + m));
```

This JavaScript code performs the same operations as the provided Python code:
1. Displays a substring starting from `n` characters in and of `m` length.
2. Displays a substring starting from `n` characters in, up to the end of the string.
3. Displays the whole string minus the last character.
4. Displays a substring starting from a known character within the string and of `m` length.
5. Displays a substring starting from a known substring within the string and of `m` length.
