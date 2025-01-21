 Here's the equivalent JavaScript code for the provided Python code:

```javascript
function compare(a, b) {
    console.log(`%o is of type %s and %o is of type %s`, a, typeof a, b, typeof b);
    
    if (a < b)      console.log('%o is strictly less than %o', a, b);
    if (a <= b)     console.log('%o is less than or equal to %o', a, b);
    if (a > b)      console.log('%o is strictly greater than %o', a, b);
    if (a >= b)     console.log('%o is greater than or equal to %o', a, b);
    if (a === b)    console.log('%o is equal to %o', a, b);
    if (a !== b)    console.log('%o is not equal to %o', a, b);
    if (a == b)     console.log('%o is loosely equal to %o', a, b); // In JavaScript, '==' performs type coercion for comparison
    if (a != b)     console.log('%o is not loosely equal to %o', a, b); // In JavaScript, '!=' performs type coercion for comparison
    if (a === b)    console.log('%o has strict equality with %o', a, b);
    if (a !== b)    console.log('%o has negated strict equality with %o', a, b);
}

compare('YUP', 'YUP');
compare('BALL', 'BELL');
compare('24', '123');
compare(24, 123);
compare(5.0, 5);
```

### Explanation:
1. **Comparing two strings for exact equality**: This is done using `===` and `!==`.
2. **Comparing two strings for inequality**: This is done using `<`, `<=`, `>`, `>=`, `===`, and `!==`. Note that in JavaScript, the strict equality operators (`===` and `!==`) do not perform type coercion, which aligns with Python's behavior for these comparisons.
3. **Comparing two strings to see if one is lexically ordered before or after the other**: This is done using `<` and `>`.
4. **Case sensitive comparisons**: JavaScript does not have a concept of case sensitivity in string comparison; all comparisons are case-sensitive by default.
5. **Case insensitive comparisons**: To achieve case-insensitive comparison, you can convert strings to the same case (either upper or lower) before comparing them: `a.toLowerCase() === b.toLowerCase()`.
6. **Comparing numeric strings if these are not treated lexically**: In JavaScript, string comparison is lexicographical by default, but for numeric comparisons of strings, you would need to parse the strings as numbers and compare those numbers directly using `<`, `<=`, `>`, `>=` operators after converting them to numbers with `Number()`.

This script demonstrates a basic set of string and type comparisons in JavaScript, similar to what Python's `compare` function does.
