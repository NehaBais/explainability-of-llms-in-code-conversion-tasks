The given code is written in Java and it is used to achieve the different substrings mentioned in the requirement. To convert this into JavaScript:

```javascript
function Substring(str, n, m){
    if (m == null) {
        return str.substring(n);
    } else {
        return str.substring(n, n+m);
    }
}

function Substring(str, n){
    return str.slice(n);
}

function Substring(str){
    return str.slice(0, -1);
}

function Substring(str, c, m){
    var index = str.indexOf(c);
    if (index == -1) {
        throw "Character not found in string";
    } else if (m === undefined) {
        return str.slice(index);
    } else {
        return str.substring(index, index + m + 1);
    }
}

function Substring(str, sub, m){
    var index = str.indexOf(sub);
    if (index == -1) {
        throw "Substring not found in string";
    } else if (m === undefined) {
        return str.slice(index);
    } else {
        return str.substring(index, index + m + 1);
    }
}
```
Please note that JavaScript does not use UTF-8 or UTF-16 for encoding strings, it uses Unicode encoded code points directly (code units).
