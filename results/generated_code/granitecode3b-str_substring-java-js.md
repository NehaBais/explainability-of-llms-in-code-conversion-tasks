Sure! Here's the JavaScript code that satisfies the requirements:
```javascript
function substring(str, n, m) {
  return str.slice(n, n + m);
}
function substring(str, n) {
  return str.slice(n);
}
function substring(str) {
  return str.slice(0, -1);
}
function substring(str, c, m) {
  return str.slice(str.indexOf(c), str.indexOf(c) + m + 1);
}
function substring(str, sub, m) {
  return str.slice(str.indexOf(sub), str.indexOf(sub) + m + 1);
}
```
The `substring` function takes in a string `str`, an optional starting index `n` (defaulting to 0), and an optional length `m`. The function then returns the desired substring using the built-in `slice` method of JavaScript strings.

