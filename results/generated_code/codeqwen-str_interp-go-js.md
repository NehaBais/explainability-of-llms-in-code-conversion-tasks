The equivalent code in JavaScript would be:

```javascript
let str = "Mary had a %s lamb";
let txt = "little";
let out = str.replace("%s", txt);
console.log(out);
```

Here's how it works:

- `str.replace("%s", txt)` replaces the first occurrence of `%s` in the string `str` with the value of `txt`. The result is stored in the variable `out`. 

- `console.log(out);` logs the interpolated string to the console.
