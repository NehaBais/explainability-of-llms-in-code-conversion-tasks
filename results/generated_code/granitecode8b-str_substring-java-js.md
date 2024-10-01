Here is the converted JavaScript code that meets the requirements specified:
```
function substring(str, n, m) {
 return str.substring(n, n + m);
}
function substring(str, n) {
 return str.substring(n);
}
function substring(str) {
 return str.substring(0, str.length - 1);
}
function substring(str, c, m) {
 return str.substring(str.indexOf(c), str.indexOf(c) + m + 1);
}
function substring(str, sub, m) {
 return str.substring(str.indexOf(sub), str.indexOf(sub) + m + 1);
}
```
Note: The JavaScript `substring()` method does not have the same behavior as Java's `substring()` method in terms of handling negative indices or out-of-bounds errors. To ensure proper error checking and bounds checking, you may need to add additional code to handle these cases.

