Here is the equivalent JavaScript code:

```javascript
const str = "Mary had a %s lamb";
const txt = "big";
const out = str.replace("%s", txt);
console.log(out);
```

In this JavaScript version, the `fmt.Sprintf()` function from Golang is replaced with `replace()`. This JavaScript version uses template literals for string interpolation and replacement, similar to Go's `fmt.Sprintf()`.
