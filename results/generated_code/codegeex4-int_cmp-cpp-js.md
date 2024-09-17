Here's how you can convert the given C++ code into JavaScript:

```javascript
let a = parseInt(prompt("Enter first integer: "), 10);
let b = parseInt(prompt("Enter second integer: "), 10);

if (isNaN(a) || isNaN(b)) {
    console.error('could not read the numbers');
} else {
    // test for less-than
    if (a < b)
        console.log(`${a} is less than ${b}`);

    // test for equality
    if (a == b)
        console.log(`${a} is equal to ${b}`);

    // test for greater-than
    if (a > b)
        console.log(`${a} is greater than ${b}`);
}
```

This JavaScript code uses the `prompt` function to get integers from a user and stores them in variables `a` and `b`. Then it checks whether these values are numbers using the `isNaN` function.

Note: `parseInt` function converts its first argument to an integer. The second parameter "10" is used here to specify that the number should be parsed in base 10 (decimal). This is similar to how input is handled in C++ standard input stream with >> operator.
