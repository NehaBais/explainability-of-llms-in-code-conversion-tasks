Here's how you can convert the given C code to JavaScript:
```javascript
function printLogic(a, b) {
  console.log('a and b is ' + (a && b));
  console.log('a or b is ' + (a || b));
  console.log('not a is ' + (!a));
}
```
In this JavaScript function, `console.log()` is used to output the results instead of `printf()`. Logical operators `&&`, `||` and `!` are also used in the same way as in C.
