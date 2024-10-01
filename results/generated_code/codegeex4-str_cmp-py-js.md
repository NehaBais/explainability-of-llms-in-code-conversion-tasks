Here is the JavaScript version of your Python code:

```javascript
function compare(a, b) {
    console.log(`"${a}" is of type ${typeof a} and "${b}" is of type ${typeof b}`);
  
    if (a < b) { 
        console.log(`'${a}' is strictly less than '${b}'`);
    }
    if (a <= b) {
        console.log(`'${a}' is less than or equal to '${b}'`);
    }
    if (a > b) { 
        console.log(`'${a}' is strictly greater than '${b}'`);
    }
    if (a >= b) {
        console.log(`'${a}' is greater than or equal to '${b}'`);
    }
    if (a === b) { 
        console.log(`'${a}' is equal to '${b}'`);
    }
    if (a !== b) { 
        console.log(`'${a}' is not equal to '${b}'`);
    }
    if (a == b) {
        console.log(`'${a}' has identity with '${b}'`);
    } else {
        console.log(`'${a}' doesn't have identity with '${b}'`);
    }
}

compare('YUP', 'YUP');
compare('BALL', 'BELL');
compare('24', '123');
compare(24, 123);
compare(5.0, 5);

```
Note that JavaScript does not support object identity comparison (`is` keyword) like Python does, so in the JavaScript version we've used a slightly different approach to compare objects for equality.

Also, strings are compared lexicographically in JavaScript, but numerical strings can also be compared numerically when using `<`, `>`, `<=`, and `>=`. However, `==` and `===` comparisons will always treat them as strings. To ensure they're treated numerically, you'll need to explicitly convert the strings to numbers before comparison.

if (+a === +b) { 
    console.log(`'${a}' is equal to '${b}' (as numbers)`); // '+a' converts 'a' into a number if it's a string representation of a number
} else {
    console.log(`'${a}' isn't equal to '${b}' (as numbers)`);
}

Lastly, in order to perform case insensitive comparisons you can convert both strings to the same case using `toLowerCase()` or `toUpperCase()`.
