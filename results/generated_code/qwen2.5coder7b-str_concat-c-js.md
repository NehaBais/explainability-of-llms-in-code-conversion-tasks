Here is the equivalent code in JavaScript:
```javascript
let s = 'hello';
let s2;

console.log(s + ' literal');

s2 = s.concat(' literal');
console.log(s2);

// No need to manually free memory as JavaScript uses garbage collection
```

This script achieves the same functionality as the provided C code. It creates a string variable `s` with value "hello". Then it concatenates `s` with another string literal " literal" and stores the result in another string variable `s2`. Finally, it logs the content of both variables to the console.
