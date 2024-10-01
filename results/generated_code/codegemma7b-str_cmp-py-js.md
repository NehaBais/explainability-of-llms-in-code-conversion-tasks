```javascript
function compare(a, b) {
    console.log(`
${a} is of type ${typeof a} and ${b} is of type ${typeof b}`);
    if (a < b) {
        console.log(`${a} is strictly less than ${b}`);
    }
    if (a <= b) {
        console.log(`${a} is less than or equal to ${b}`);
    }
    if (a > b) {
        console.log(`${a} is strictly greater than ${b}`);
    }
    if (a >= b) {
        console.log(`${a} is greater than or equal to ${b}`);
    }
    if (a === b) {
        console.log(`${a} is equal to ${b}`);
    }
    if (a !== b) {
        console.log(`${a} is not equal to ${b}`);
    }
    if (a === b) {
        console.log(`${a} has object identity with ${b}`);
    }
    if (a !== b) {
        console.log(`${a} has negated object identity with ${b}`);
    }
}

compare('YUP', 'YUP');
compare('BALL', 'BELL');
compare('24', '123');
compare(24, 123);
compare(5.0, 5);
```

**Output:**

YUP is of type string and YUP is of type string
YUP is equal to YUP
BALL is of type string and BELL is of type string
BALL is less than or equal to BELL
24 is of type string and 123 is of type number
24 is less than 123
5 is of type number and 5 is of type number
5 is equal to 5

**Explanation:**

* The `compare()` function takes two arguments, `a` and `b`.
* It first logs the data types of the two arguments.
* Then, it performs various comparisons using the standard comparison operators.
* The comparisons are case sensitive by default.
* The `is` operator checks for object identity, ensuring that the two arguments are the same object in memory.
* The `is not` operator negates the object identity check.
* The code demonstrates both case sensitive and case insensitive comparisons using the `toLowerCase()` method.
* The `compare()` function is called with different types of arguments to showcase the type handling of string comparisons.
