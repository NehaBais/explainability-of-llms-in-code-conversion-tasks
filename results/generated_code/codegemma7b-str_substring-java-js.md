```javascript
function substring(str, n, m) {
    return str.slice(n, n + m);
}

function substringFrom(str, n) {
    return str.slice(n);
}

function substringExceptLast(str) {
    return str.slice(0, str.length - 1);
}

function substringFromChar(str, c, m) {
    const index = str.indexOf(c);
    return str.slice(index, index + m + 1);
}

function substringFromSubstring(str, sub, m) {
    const index = str.indexOf(sub);
    return str.slice(index, index + m + 1);
}
```
