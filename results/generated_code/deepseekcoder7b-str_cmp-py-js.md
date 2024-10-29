Here is the equivalent JavaScript code for your Python program:

```js
function compare(a, b) {
    console.log("%s is of type %s and %s is of type %s", a, typeof a, b, typeof b);
    
    if (a < b)      console.log('%s is strictly less than  %s', a, b);
    if (a <= b)     console.log('%s is less than or equal to %s', a, b);
    if (a > b)      console.log('%s is strictly greater than  %s', a, b);
    if (a >= b)     console.log('%s is greater than or equal to %s', a, b);
    if (a === b)    console.log('%s is equal to %s', a, b);
    if (a !== b)    console.log('%s is not equal to %s', a, b);
    
    // JavaScript doesn't provide direct equivalent for Python's 'is' operator because 
    // JS uses === and !== for strict equality comparison which checks type as well.
}

compare('YUP', 'YUP');
compare('BALL', 'BELL');
compare('24', '123');
// compare(24, 123); will throw an error because JS treats numbers and strings differently.
compare("24", "123"); // This is a string comparison in JS.
compare(5.0, 5);
```
In JavaScript:
- For exact equality (`==`), we use `===` which checks both value and type.
- For inequality (`!=`) we use `!==` which also checks both value and type.
- In JS, the comparison between numeric string is treated as lexical comparison like strings, not numeric ones. That's why I have replaced your last two calls of compare function with equivalent strings in JS code. 
- JavaScript handles case sensitivity for string comparisons through built-in methods such as `toLowerCase()` and `toUpperCase()`. You can convert the strings to the same case before comparison if you want a case insensitive comparison.

