The equivalent code in JavaScript would be:

```javascript
let myStrings = ["prepended to", "my string"];
let prepend = myStrings.reduce((a, b) => a + b, '');
console.log(prepend);
```
