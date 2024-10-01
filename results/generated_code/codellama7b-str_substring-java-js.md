In JavaScript, you can use the `substr()` method to perform these substring operations. Here are the equivalent methods in JavaScript:
```
function Substring(str, n, m) {
    return str.substr(n, m);
}
function Substring(str, n) {
    return str.substr(n);
}
function Substring(str) {
    return str.substr(0, str.length - 1);
}
function Substring(str, c, m) {
    return str.substr(str.indexOf(c), str.indexOf(c) + m + 1);
}
function Substring(str, sub, m) {
    return str.substr(str.indexOf(sub), str.indexOf(sub) + m + 1);
}
```
Note that in JavaScript, the `substr()` method works on a string and returns a new string containing the specified number of characters starting at the given index. The method takes three arguments: the first is the string to be processed, the second is the starting index, and the third is the length of the substring to be extracted.

For example, `str.substr(0, 5)` returns the first five characters of the string `str`.

Also note that in JavaScript, strings are immutable, so the `substr()` method does not modify the original string, but rather creates a new string with the specified substring.
