Here is the JavaScript equivalent of your C code:

```javascript
let str = "my String";
let cstr = "Changed ";
str = `${cstr}${str}`;
console.log(str);
```

The ``${}`` syntax in JavaScript is known as template literals, which allows you to embed variables directly into a string. The `${cstr}${str}` part concatenates the variable `cstr` and `str`, then assigns the result back to `str`.
