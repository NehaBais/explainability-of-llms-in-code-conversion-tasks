The equivalent code in JavaScript would be:

```javascript
let str = "Mary had a %s lamb";
let txt = "little";
console.log(str.replace('%s', txt));
```

In this JavaScript version, we use the `replace()` method to replace 'X' with 'little' in our formatted string. The '%s' placeholder was replaced by the variable that contains the value to be interpolated into the original string.
