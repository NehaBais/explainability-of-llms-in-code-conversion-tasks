 The equivalent JavaScript code would be:

```javascript
var str = "Good Morning";
var cstr = " to all";
var cstr2 = " !!!";

// Concatenate two strings in JavaScript using the '+' operator.
str += cstr;
str += cstr2;

console.log(str); // "Good Morning to all !!!\"
```

Notice that there is no need for manual memory management like `strcat` or `sprintf`, unlike in C, and the '+' operator can be used to concatenate strings directly.
