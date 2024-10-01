Here is the equivalent JavaScript code:

```javascript
function sConcat(s1, s2) {
  return `${s1}${s2}`;
}

let s = 'hello';
console.log(`${s} literal`);

/* or */
console.log(`${s} literal`);

let s2 = sConcat(s, " literal");
console.log(s2);
```

In this JavaScript version, the string concatenation operation is done using template literals (`${}`), and the function `sConcat` does exactly what your C function does. The allocated memory (in the original C code) is automatically handled by JavaScript's garbage collection system.
