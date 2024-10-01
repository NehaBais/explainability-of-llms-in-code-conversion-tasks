Here is the JavaScript version of your Java code:

```javascript
function Substring(str, n, m) {
  return str.slice(n, n + m);
}

function Substring(str, n) {
  return str.slice(n);
}

function Substring(str) {
  return str.slice(0, -1);
}

function Substring(str, c, m) {
  return str.slice(str.indexOf(c), str.indexOf(c) + m + 1);
}

function Substring(str, sub, m) {
  return str.slice(str.indexOf(sub), str.indexOf(sub) + m + 1);
}
```

Please note that JavaScript's `slice()` function is similar to Java's `substring()`. However, note the difference between them:
- In JavaScript, indices start at 0 and inclusive for both ends. So the end index in `str.slice(n, n + m)` (and `str.slice(n)`, `str.slice(0, -1)`, `str.slice(str.indexOf(c), str.indexOf(c) + m + 1)`, and `str.slice(str.indexOf(sub), str.indexOf(sub) + m + 1)`) is exclusive.
- In Java's `substring()`, the end index is exclusive just like in JavaScript's `slice()`.
- However, in Java's `substring()` function, if the end index exceeds the length of the string, it throws a StringIndexOutOfBoundsException. This isn't true for JavaScript's `slice()`, which will simply return the remaining part of the string when the end index is out of bounds.

This behavior difference could be important depending on your specific use case, as JavaScript does not have a built-in method to emulate Java's string slicing with out of bounds indices, and it can lead to unexpected behavior if you don't carefully handle it.
