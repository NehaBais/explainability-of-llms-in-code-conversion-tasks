Here is the JavaScript equivalent of your Java code:

```javascript
function Substring(str, n, m) {
    return str.slice(n, n+m);
}

function Substring(str, n) {
    return str.slice(n);
}

function Substring(str) {
    return str.slice(0, -1);
}

function Substring(str, c, m) {
    var startIndex = str.indexOf(c);
    if (startIndex === -1)
        throw new Error("Character not found in string");
    return str.slice(startIndex, startIndex+m+1);
}

function Substring(str, sub, m) {
    var startIndex = str.indexOf(sub);
    if (startIndex === -1)
        throw new Error("Substring not found in string");
    return str.slice(startIndex, startIndex+m+1);
}
```

The `slice` method in JavaScript works similar to the `substring` method in Java. It accepts two parameters indicating a range within the string from which a substring should be returned.

Please note that, for UTF-8 and Unicode strings, JavaScript's `String` methods are designed to work with unicode code points, not 8-bit or 16-bit units. This makes it well suited for your requirement.
