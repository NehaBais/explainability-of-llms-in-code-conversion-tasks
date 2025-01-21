 Here's the equivalent JavaScript code for the given C code. In this conversion, we use a string variable and the `concat` method to append strings in a more idiomatic way in JavaScript.

```javascript
let str = "Good Morning";
const cstr = " to all";
const cstr2 = " !!!";

// Append the string with another string literal in a more idiomatic way
str += cstr + cstr2;

console.log(str);
```

This JavaScript code does exactly what the original C code did: it creates a string variable, appends additional strings to it, and then prints out the contents of the variable after the append operation. The `concat` method is used in JavaScript to concatenate strings, which serves a similar purpose to the `strcat` function in C.
