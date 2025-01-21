Here is how you can convert the given C++ code to JavaScript:

```javascript
function demoCompare(a, b, semantically) {
    console.log(`${a} and ${b} are ${a === b ? '' : 'not '}exactly ${semantically} equal.`);
    console.log(`${a} and ${b} are ${a !== b ? '' : 'not '}exactly ${semantically} unequal.`);
    console.log(`${a} is ${a < b ? '' : 'not '}lexically ordered before ${b}.`);
    console.log(`${a} is ${a > b ? '' : 'not '}lexically ordered after ${b}.`);
}

function main() {
    let a = (process.argv.length > 2) ? process.argv[2] : "1.2.Foo";
    let b = (process.argv.length > 3) ? process.argv[3] : "1.3.Bar";

    demoCompare(a, b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    a = a.toLowerCase();
    b = b.toLowerCase();
    demoCompare(a, b, "lexically");

    let numA = parseFloat(a);
    let numB = parseFloat(b);
    
    demoCompare(numA, numB, "numerically");
}

main();
```

This JavaScript code does the same thing as the C++ one:

- It defines a function `demoCompare()` that prints out whether two strings are exactly equal, unequal, lexicographically before or after each other.
- In the main() function, it compares two string arguments passed to the script (from command line) with default values "1.2.Foo" and "1.3.Bar", if no arguments are provided. Then it makes case-insensitive comparison by converting both strings to lower case.
- It also does a numeric comparison between two numbers obtained from the string representations of those two strings using `parseFloat()`.
