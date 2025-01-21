 Sure! Below is the equivalent JavaScript code for the provided Go code:

```javascript
let str = "Mary had a %s lamb";
let txt = "little";
let out = str.replace('%s', txt);
console.log(out);
```

This JavaScript code does the following:
1. Defines a template string `str` with a placeholder `%s`.
2. Assigns the value `"little"` to the variable `txt`.
3. Uses the `replace` method to replace the placeholder `%s` in `str` with the value of `txt`.
4. Logs the interpolated result to the console.
