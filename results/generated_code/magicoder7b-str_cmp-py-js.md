 In JavaScript, the equivalent code for the Python code provided would look like:

```javascript
function compare(a, b) {
    console.log(
        `%r is of type %r and %r is of type %r`,
          a, typeof a, b, typeof b
    );
    if (a <  b)      console.log(`%r is strictly less than  %r`, a, b);
    if (a <= b)      console.log(`%r is less than or equal to %r`, a, b);
    if (a >  b)      console.log(`%r is strictly greater than  %r`, a, b);
    if (a >= b)      console.log(`%r is greater than or equal to %r`, a, b);
    if (a == b)      console.log(`%r is equal to %r`, a, b);
    if (a != b)      console.log(`%r is not equal to %r`, a, b);
    // In JavaScript, the '==' operator does type coercion. For instance:
    // 2 == '2', true
    // 2 === '2', false
    if (a === b)     console.log(`%r has object identity with %r`, a, b);
    if (a !== b)     console.log(`%r has negated object identity with %r`, a, b);
}

compare('YUP', 'YUP'); // "YUP" is of type "string" and "YUP" is of type "string"
compare('BALL', 'BELL'); // "BALL" is not equal to "BELL", "BALL" is of type "string" and "BELL" is of type "string"
compare('24', '123'); // "24" is lexically ordered after "123", "24" is of type "string" and "123" is of type "string"
compare(24, 123); // 24 is not equal to 123, both are of type "number"
```

The biggest differences between Python and JavaScript in this context are:
- JavaScript uses `console.log()` instead of `print()`, which writes output to the console.
- In JavaScript, `typeof` is used to determine the data type of a variable or value.
- JavaScript also includes strict equality (`===`) that checks both the value and the type of the operands for comparison, unlike Python's `is` keyword.
