```javascript
let s = "hello";
console.log(s + ' literal');
// or 
console.log(s + ' literal');

let s2 = s.concat(' literal');
console.log(s2);
s2 = null;
```

In the JavaScript version, we've replaced `char *sconcat` with the JavaScript function `concat`, which is used to concatenate two strings. We then print both original string and the concatenated one. Finally, we release memory allocated for `s2`.
