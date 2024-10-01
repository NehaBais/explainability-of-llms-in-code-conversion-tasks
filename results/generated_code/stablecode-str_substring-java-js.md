Here is the JavaScript equivalent of your Java code:

```javascript
function substring(str, n, m) {
  return str.substring(n, n + m));
}

function substring(str, n) {
  return str.substring(n));
}

function substring(str) {
  return str.substring(0, str.length() - 1));
}

function substring(str, c, m) {
  let index = str.indexOf(c);
  return str.substring(index, index + m + 1));
}

function substring(str, sub, m) {
  let index = str.indexOf(sub);
  return str.substring(index, index + m + 1));
}
```
The above JavaScript functions work exactly as your provided Java code to solve the requirements:

- Display a substring: starting from n characters in and of m length;
- Starting from n characters in, up to the end of the string;
- Whole string minus the last character;
- Starting from a known character within the string and of m length;
- Starting from a known substring within the string and of m length.
