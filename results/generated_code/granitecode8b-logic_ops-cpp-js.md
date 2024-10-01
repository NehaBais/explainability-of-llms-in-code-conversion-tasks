Here's the JavaScript code that meets the requirements:
```javascript
function printLogic(a, b) {
 console.log('a and b is', a && b);
 console.log('a or b is', a || b);
 console.log('not a is', !a);
}
printLogic(true, false);
```
The `console.log` function is used instead of `std::cout`, and the output format is set to display boolean values as "true" or "false" using the `console.log()` method with the `%r` format specifier:

// a and b is false
// a or b is true
// not a is false

