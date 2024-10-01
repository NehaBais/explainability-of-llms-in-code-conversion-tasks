Here is how you can achieve the same result in JavaScript:

```javascript
let str = 'Mary had a ${txt} lamb';
let txt = 'big';
let out = str.replace('${txt}', txt);
console.log(out);
```

In this JavaScript code, `${txt}` is the syntax for string interpolation and it's equivalent to `%s` in Golang. It will be replaced with the value of `txt`.
