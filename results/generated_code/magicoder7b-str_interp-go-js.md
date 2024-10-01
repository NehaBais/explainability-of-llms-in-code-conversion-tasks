 In JavaScript, you can use the `String.prototype.replace()` function to perform string interpolation similar to Golang's `fmt.Sprintf()`. Here is the equivalent code in JavaScript:

```javascript
let str = "Mary had a %s lamb";
let txt = "little";
let out = str.replace("%s", txt);
console.log(out);  // Outputs: "Mary had a little lamb"
```
In this JavaScript code, `%s` is the defined character sequence that will be replaced by `txt`.
