Here is how you can convert the Python code to JavaScript:

```javascript
function compare(a, b) {
    console.log(`${a} is of type ${typeof a} and ${b} is of type ${typeof b}`);
    if (a < b) console.log(`'${a}' is strictly less than '${b}'`);
    if (a <= b) console.log(`'${a}' is less than or equal to '${b}'`);
    if (a > b) console.log(`'${a}' is strictly greater than '${b}'`);
    if (a >= b) console.log(`'${a}' is greater than or equal to '${b}'`);
    if (a == b) console.log(`'${a}' is equal to '${b}'`);
    if (a != b) console.log(`'${a}' is not equal to '${b}'`);
}

compare('YUP', 'YUP');
compare('BALL', 'BELL');
compare('24', '123');
```

Note:

- JavaScript does not have the "is" and "is not" operators, so these comparisons are done using `===` (identical) and `!==` (not identical).
- JavaScript treats numeric strings as numbers for comparison. For example, `'24' < '123'` will return `false`, because `24` is less than `123`.
- The `<` and `>` operators in JavaScript do not work like in Python when comparing numbers and strings. Instead, they first convert the values to primitives and then compare them. This can lead to unexpected results.
- String comparison in JavaScript is case-sensitive. For case-insensitive comparisons you should use the `.toLowerCase()` or `.toUpperCase()` methods before making a comparison.
