The equivalent code in JavaScript would be:

```javascript
function replaceStringWithStringInterpolation(str, value) {
    return str.replace('%s', value);
}

let str = "Mary had a %s lamb";
let txt = "little";
let out = replaceStringWithStringInterpolation(str, txt);
console.log(out);
```

In this JavaScript code, we define a function `replaceStringWithStringInterpolation` that takes two parameters: the string `str` and the value to be inserted into it. We use the `replace()` method of strings, where `%s` is replaced with the provided value using the format specifier `%s`. The result is then returned by the function.

We then call this function with a sample input string `"Mary had a %s lamb"` and a sample input value `"little"`, and print the output to the console.
