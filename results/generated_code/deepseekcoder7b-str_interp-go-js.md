In JavaScript you can use the `replace()` method for strings to do string interpolation. Here is how we could translate your Go code into JS:

```javascript
let str = "Mary had a %s lamb";
let txt = "big";
let out = str.replace("%s", txt);
console.log(out); // Output: Mary had a big lamb
```
In this JavaScript version, the string `str` is replaced with `txt` where the placeholder `%s` was present in the original Go code. The result of interpolation would be logged to console.

