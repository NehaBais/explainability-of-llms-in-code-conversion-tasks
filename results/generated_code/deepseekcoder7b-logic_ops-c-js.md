Here's the JavaScript equivalent of your C code:

```js
function print_logic(a, b) {
   console.log('a and b is ' + (a && b));
   console.log('a or b is ' + (a || b));
   console.log('not a is ' + !a);
}
```
The logical operators in JavaScript work the same way as they do in C, so there's no need to change them. The only difference is how we are calling `printf` in C and `console.log` in JavaScript. In both cases, we're printing out the results of our logic operations to the console, but output formatting will be slightly different due to differences between languages.

