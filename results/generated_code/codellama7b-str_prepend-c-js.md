
Here's the JavaScript code that corresponds to the given C code:

```
const str = 'my String';
let cstr = 'Changed ';
let dup;

// prepend the string variable with another string literal
str = cstr + str;

console.log(str);
```
Note that in JavaScript, strings are immutable by default, so we need to use a different approach to prepend the string variable with another string literal. The `+` operator is used for concatenation, which means that it combines two or more strings together to form a new string. In this case, we're using it to combine the `cstr` and `str` variables into a single string.

Also note that in JavaScript, we don't need to use `sprintf` function to convert a string to another type of string like C does, because strings in JavaScript are immutable by default, so we can directly use the `+` operator for concatenation.
