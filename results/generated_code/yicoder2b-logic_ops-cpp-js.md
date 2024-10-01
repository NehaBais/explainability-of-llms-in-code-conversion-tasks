Sure, here's how you can convert this C++ function to JavaScript:

```javascript
function print_logic(a, b) {
    console.log('a and b is ' + (a && b));
    console.log('a or b is ' + (a || b));
    console.log('not a is ' + !a);
}
```
In JavaScript, we don't need to explicitly declare the boolean type as `true` and `false` because these are native JavaScript data types. The `console.log()` function will automatically convert any value it receives into a string.
