The JavaScript version of the code would look like this:

```javascript
function demoCompare(A, B, semantically) {
    console.log(`${A} and ${B} are ${A === B ? "" : "not"} exactly ${semantically} equal.`);
    console.log(`${A} and ${B} are ${A !== B ? "" : "not"} ${semantically} unequal.`);
    console.log(`${A} is ${A < B ? "" : "not"} ${semantically} ordered before ${B}.`);
    console.log(`${A} is ${A > B ? "" : "not"} ${semantically} ordered after ${B}.`);
}

let A = (process.argv[2]) || '1.2.Foo';
let B = (process.argv[3]) || '1.3.Bar';

demoCompare(A, B, "lexically");

// Case-insensitive comparisons by folding both strings to a common case.
A = A.toLowerCase();
B = B.toLowerCase();
demoCompare(A, B, "lexically");

// Numeric comparisons; here 'double' could be any type for which the
// relevant >> operator is defined, eg int, long, etc.
let numA = parseFloat(A);
let numB = parseFloat(B);
demoCompare(numA, numB, "numerically");

if (A === B) {
    return 0;
} else if (A < B) {
    return -1;
} else {
    return 1;
}
```

Please note that JavaScript does not have a built-in function to compare string lexicographically. Therefore, the `demoCompare()` function only checks for equality and inequality, and it will sort strings based on alphabetical order (or 'lexicographic' order). For other kinds of string comparisons that JavaScript provides such as comparing numeric strings or case insensitive comparison, we have to write our own logic.
