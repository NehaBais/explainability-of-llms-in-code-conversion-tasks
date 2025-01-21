 Below is the JavaScript equivalent of the provided C++ code. This JavaScript example demonstrates how to compare strings for exact equality and inequality, perform lexical comparisons, handle case sensitivity, and compare numeric strings lexically or numerically.

```javascript
function demoCompare(a, b, semantically) {
    console.log(`${a} and ${b} are ${(a === b ? "" : "not ")}exactly ${semantically} equal.`);
    console.log(`${a} and ${b} are ${(a !== b ? "" : "not ")}${semantically}inequal.`);
    console.log(`${a} is ${(a < b ? "" : "not ")}${semantically} ordered before ${b}.`);
    console.log(`${a} is ${(a > b ? "" : "not ")}${semantically} ordered after ${b}.`);
}

function main(args) {
    // Default values for a and b if not provided as arguments
    let a = (args.length > 1) ? args[1] : "1.2.Foo";
    let b = (args.length > 2) ? args[2] : "1.3.Bar";

    // Case-sensitive comparisons
    demoCompare(a, b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case
    a = a.toLowerCase();
    b = b.toLowerCase();
    demoCompare(a, b, "lexically");

    // Numeric comparisons; here 'numA' and 'numB' could be any numeric type for which the relevant parsing is defined, eg parseInt, parseFloat, etc.
    let numA = parseFloat(a);
    let numB = parseFloat(b);
    demoCompare(numA, numB, "numerically");

    // Check exact equality of strings (This part is slightly different from C++ due to type coercion)
    console.log(`Strings ${a} and ${b} are ${(a === b ? "" : "not ")}exactly equal.`);
}

// Call the main function with command line arguments
main(process.argv.slice(2));
```

### Explanation:
1. **Function `demoCompare`**: This function takes two strings and a semantic label (e.g., "lexically" or "numerically") to print out the comparison results based on exact equality, inequality, ordering before, and after.

2. **Main Function (`main`)**: 
   - Takes command line arguments for `a` and `b`, defaulting to predefined strings if not provided.
   - Performs case-sensitive comparisons by directly comparing the strings using the strict equality operator (`===`).
   - Converts both strings to lowercase (for case-insensitive comparison) and reruns the comparisons.
   - Parses numeric values from the strings and performs numeric comparisons based on their floating-point representations.
   - Outputs whether the strings are exactly equal, which is checked using `===`.

3. **Command Line Interface**: The script expects command line arguments for `a` and `b`, or defaults to predefined strings if not provided. It then processes these inputs as described above.
