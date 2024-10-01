Here is the JavaScript equivalent of your Java code:

```javascript
function substring(str, n, m) {
  if (typeof m === 'undefined') {
    m = str.length - n;
  }
  return str.slice(n, n + m);
}

function substring(str, n) {
  return str.slice(n);
}

function substring(str) {
  return str.slice(0, str.length - 1);
}

function substring(str, c, m) {
  const index = str.indexOf(c);
  if (index === -1) return '';
  return str.slice(index, index + m + 1);
}

function substring(str, sub, m) {
  const index = str.indexOf(sub);
  if (index === -1) return '';
  return str.slice(index, index + m + 1);
}
```

Note: In JavaScript, you can use `str.slice(start, end)` to create a substring, similar to the Java method `substring(fromIndex, endIndex)`. The `slice()` function extracts parts of a string and returns the extracted part in a new string without modifying the original string. The start and end parameters specify the part of the string to extract.
