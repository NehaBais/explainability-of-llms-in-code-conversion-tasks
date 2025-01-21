Here is the JavaScript equivalent of your C code:

```javascript
let str = "my String";
let cstr = "Changed ";
let dup = str.slice();
console.log(cstr + dup);
```

In this JavaScript code, we first declare and initialize a variable `str` with any text value. Then declare another string literal `cstr`. We use the slice method to copy the original `str` into `dup`. Finally, we use console.log to print the concatenation of `cstr` and `dup`.

Note that JavaScript doesn't require memory management like C, so there's no need for freeing up memory.
