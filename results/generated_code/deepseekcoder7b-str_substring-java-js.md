The JavaScript equivalent of the given Java code would be as follows - 

```javascript
function Substring(str, n, m) {
    return str.slice(n, n + m);
}

function Substring(str, n) {
    return str.slice(n);
}

function Substring(str) {
    return str.slice(0, str.length - 1);
}

function Substring(str, c, m) {
    let index = str.indexOf(c);
    if (index !== -1) {
        return str.slice(index, index + m + 1);
    } else {
        throw "Character not found";
    }
}

function Substring(str, sub, m) {
    let index = str.indexOf(sub);
    if (index !== -1) {
        return str.slice(index, index + sub.length + m + 1);
    } else {
        throw "Substring not found";
    }
}
```

It's important to note that JavaScript does have a `substring` method which behaves similarly to the Java `substring` method. The difference is that if you pass negative indices or out-of-range start/end indexes it won't throw an error, instead it will treat them as 0 and string length respectively. But for our case we have handled those cases manually in JavaScript functions above where it throws appropriate errors when character or substring not found.

