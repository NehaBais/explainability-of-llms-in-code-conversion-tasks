 Here is the JavaScript version of your Golang code:

```JavaScript
function main() {
    var s = "ABCDEFGH";
    var n = 2;
    var m = 3;
    // for reference
    console.log("Index: ", "01234567");
    console.log("String:", s);
    // starting from n characters in and of m length
    console.log(`Start ${n}, length ${m}: ${s.substring(n, n+m)}`);
    // starting from n characters in, up to the end of the string
    console.log(`Start ${n}, to end: ${s.substring(n)}`);
    // whole string minus last character
    console.log(`All but last: ${s.slice(0, -1)}`);
    // starting from a known character within the string and of m length
    var dx = s.indexOf('D');
    console.log(`Start 'D', length ${m}: ${s.substring(dx, dx+m)}`);
    // starting from a known substring within the string and of m length
    var sx = s.indexOf("DE");
    console.log(`Start "DE", length ${m}: ${s.substring(sx, sx+m)}`);
}
```

Please be aware that JavaScript's `substring()` method uses 0-based indexing and non-negative indices, so the indexes are adjusted accordingly in this version of the code compared to the original Golang one.
